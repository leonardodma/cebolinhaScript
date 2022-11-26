import re


class Token:
    def __init__(self, type: str, value):
        self.type = type
        self.value = value


class PrePro:
    @staticmethod
    def filter(source: str):
        source = re.sub(re.compile("//.*?\n"), "", source)
        source = re.sub("\s+", " ", source)
        return source.replace("\n", "")


class Tokenizer:
    def __init__(self, source: str):
        self.source = PrePro.filter(source)
        self.position = 0

        self.operations = {
            "+": "PLUS",
            "-": "MINUS",
            "(": "OPEN_PARENTHESES",
            ")": "CLOSE_PARENTHESES",
            "{": "OPEN_BRACKTS",
            "}": "CLOSE_BRACKTS",
            "=": "ASSIGNMENT",
            "==": "EQUAL",
            ";": "SEMICOLON",
            "!": "NOT",
            ">": "GREATER",
            "<": "LESS",
            "|": "OR",
            "||": "OR",
            "&&": "AND",
            "&": "AND",
            ".": "DOT",
            ":": "COLON",
            '"': "STRING",
            ",": "COMMA",
            "->": "ARROW",
        }

        self.reserved_words = {
            "semple_que": "IF",
            "caso_contlalio": "ELSE",
            "dulante": "WHILE",
            "mostle": "PRINT",
            "insila": "READ",
            "valiavel": "VAR",
            "inteilo": "INT_TYPE",
            "palavla": "STRING_TYPE",
            "lotina": "FUNCTION",
            "letolne": "RETURN",
            "plano_infalivel": "MAIN",
        }

        self.selectNext()

    def selectNext(self):
        source = self.source[self.position :]

        if self.position >= len(self.source) or source.replace(" ", "") == "":
            self.next = Token("EOP", None)
        else:
            value = ""
            i = 0
            for token in source:
                if token == "r":
                    raise Exception(
                        "Tá de blincadeila? 'r' não existe no Cebolinha Sclipt"
                    )
                if token == " " or token in self.operations.keys():
                    if value != "":
                        try:
                            value = int(value)
                            self.next = Token("INT", value)
                        except:
                            if value in self.reserved_words.keys():
                                self.next = Token(self.reserved_words[value], value)
                            else:
                                self.next = Token("IDENTIFIER", value)
                        break

                    elif value == "" and token != " ":
                        if token == "=" and source[i + 1] == "=":
                            self.next = Token("EQUAL", "==")
                            self.position += 2
                        elif token == "&" and source[i + 1] == "&":
                            self.next = Token(self.operations["&"], "&&")
                            self.position += 2
                        elif token == "|" and source[i + 1] == "|":
                            self.next = Token(self.operations["|"], "||")
                            self.position += 2
                        elif token == "-" and source[i + 1] == ">":
                            self.next = Token(self.operations["->"], "->")
                            self.position += 2
                        elif token == '"':
                            self.position += 1
                            string_value = ""
                            new_source = self.source[self.position :]

                            for char in new_source:
                                if char == "r":
                                    raise Exception(
                                        "Tá de blincadeila? 'r' não existe no Cebolinha Sclipt"
                                    )
                                if char != '"':
                                    string_value += char
                                    self.position += 1
                                    if self.position >= len(self.source):
                                        raise Exception(
                                            "Tá de blicadeila? Você não fechou as aspas"
                                        )
                                else:
                                    self.next = Token("STRING", string_value)
                                    self.position += 1
                                    break
                        else:
                            self.next = Token(self.operations[token], token)
                            self.position += 1

                        break

                    else:
                        self.position += 1

                elif token.isdigit() or token.isalpha() or token == "_":
                    if value.isdigit() and not token.isdigit():
                        raise ValueError(
                            "Tá de blincadeila?: Uma valiavel não pode ter um numelo no começo!"
                        )

                    value += token
                    self.position += 1

                else:
                    raise ValueError(
                        f"Tá de blincadeila?: Você digitou algo desconhecido: '{token}'"
                    )

                i += 1
