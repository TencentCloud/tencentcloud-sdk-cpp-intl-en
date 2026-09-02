/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERAPPITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERAPPITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Container application information.
                */
                class ContainerAppItem : public AbstractModel
                {
                public:
                    ContainerAppItem();
                    ~ContainerAppItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application comprehensive type, for example, web, app, or db
                     * @return MainType Application comprehensive type, for example, web, app, or db
                     * 
                     */
                    std::string GetMainType() const;

                    /**
                     * 设置Application comprehensive type, for example, web, app, or db
                     * @param _mainType Application comprehensive type, for example, web, app, or db
                     * 
                     */
                    void SetMainType(const std::string& _mainType);

                    /**
                     * 判断参数 MainType 是否已赋值
                     * @return MainType 是否已赋值
                     * 
                     */
                    bool MainTypeHasBeenSet() const;

                    /**
                     * 获取Specific application types, such as nginx or redis
                     * @return Type Specific application types, such as nginx or redis
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Specific application types, such as nginx or redis
                     * @param _type Specific application types, such as nginx or redis
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Application version number
                     * @return Version Application version number
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Application version number
                     * @param _version Application version number
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Running username.
                     * @return RunAs Running username.
                     * 
                     */
                    std::string GetRunAs() const;

                    /**
                     * 设置Running username.
                     * @param _runAs Running username.
                     * 
                     */
                    void SetRunAs(const std::string& _runAs);

                    /**
                     * 判断参数 RunAs 是否已赋值
                     * @return RunAs 是否已赋值
                     * 
                     */
                    bool RunAsHasBeenSet() const;

                    /**
                     * 获取Executable file path
                     * @return ExePath Executable file path
                     * 
                     */
                    std::string GetExePath() const;

                    /**
                     * 设置Executable file path
                     * @param _exePath Executable file path
                     * 
                     */
                    void SetExePath(const std::string& _exePath);

                    /**
                     * 判断参数 ExePath 是否已赋值
                     * @return ExePath 是否已赋值
                     * 
                     */
                    bool ExePathHasBeenSet() const;

                    /**
                     * 获取Configuration file path
                     * @return ConfigPath Configuration file path
                     * 
                     */
                    std::string GetConfigPath() const;

                    /**
                     * 设置Configuration file path
                     * @param _configPath Configuration file path
                     * 
                     */
                    void SetConfigPath(const std::string& _configPath);

                    /**
                     * 判断参数 ConfigPath 是否已赋值
                     * @return ConfigPath 是否已赋值
                     * 
                     */
                    bool ConfigPathHasBeenSet() const;

                    /**
                     * 获取Number of associated processes
                     * @return ProcessCnt Number of associated processes
                     * 
                     */
                    int64_t GetProcessCnt() const;

                    /**
                     * 设置Number of associated processes
                     * @param _processCnt Number of associated processes
                     * 
                     */
                    void SetProcessCnt(const int64_t& _processCnt);

                    /**
                     * 判断参数 ProcessCnt 是否已赋值
                     * @return ProcessCnt 是否已赋值
                     * 
                     */
                    bool ProcessCntHasBeenSet() const;

                private:

                    /**
                     * Application comprehensive type, for example, web, app, or db
                     */
                    std::string m_mainType;
                    bool m_mainTypeHasBeenSet;

                    /**
                     * Specific application types, such as nginx or redis
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Application version number
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Running username.
                     */
                    std::string m_runAs;
                    bool m_runAsHasBeenSet;

                    /**
                     * Executable file path
                     */
                    std::string m_exePath;
                    bool m_exePathHasBeenSet;

                    /**
                     * Configuration file path
                     */
                    std::string m_configPath;
                    bool m_configPathHasBeenSet;

                    /**
                     * Number of associated processes
                     */
                    int64_t m_processCnt;
                    bool m_processCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERAPPITEM_H_
