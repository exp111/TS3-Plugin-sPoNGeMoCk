#pragma once

class Config
{
public:
	Config() { };
	~Config() { };

	bool mockifyIncoming = false;
};

extern Config* config;