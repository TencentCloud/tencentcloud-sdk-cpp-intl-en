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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERWEBSERVICEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERWEBSERVICEITEM_H_

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
                * Container Web service information.
                */
                class ContainerWebServiceItem : public AbstractModel
                {
                public:
                    ContainerWebServiceItem();
                    ~ContainerWebServiceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Web service type
                     * @return Type Web service type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Web service type
                     * @param _type Web service type
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
                     * 获取Service version No.
                     * @return Version Service version No.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Service version No.
                     * @param _version Service version No.
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
                     * 获取Service startup user
                     * @return RunAs Service startup user
                     * 
                     */
                    std::string GetRunAs() const;

                    /**
                     * 设置Service startup user
                     * @param _runAs Service startup user
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

                private:

                    /**
                     * Web service type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Service version No.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Service startup user
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERWEBSERVICEITEM_H_
