[mypy]
ignore_missing_imports = False
mypy_path = ./src
check_untyped_defs = True

[mypy-pytest.*,sqlalchemy.*,redis.*]
ignore_missing_imports = True