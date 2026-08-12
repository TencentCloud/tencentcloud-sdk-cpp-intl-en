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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULCOMPONENT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULCOMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/HostBriefInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Host vulnerability component
                */
                class HostVulComponent : public AbstractModel
                {
                public:
                    HostVulComponent();
                    ~HostVulComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Host brief information</p>
                     * @return HostInfo <p>Host brief information</p>
                     * 
                     */
                    HostBriefInfo GetHostInfo() const;

                    /**
                     * 设置<p>Host brief information</p>
                     * @param _hostInfo <p>Host brief information</p>
                     * 
                     */
                    void SetHostInfo(const HostBriefInfo& _hostInfo);

                    /**
                     * 判断参数 HostInfo 是否已赋值
                     * @return HostInfo 是否已赋值
                     * 
                     */
                    bool HostInfoHasBeenSet() const;

                    /**
                     * 获取<p>Affected component version</p>
                     * @return EffectVersion <p>Affected component version</p>
                     * 
                     */
                    std::string GetEffectVersion() const;

                    /**
                     * 设置<p>Affected component version</p>
                     * @param _effectVersion <p>Affected component version</p>
                     * 
                     */
                    void SetEffectVersion(const std::string& _effectVersion);

                    /**
                     * 判断参数 EffectVersion 是否已赋值
                     * @return EffectVersion 是否已赋值
                     * 
                     */
                    bool EffectVersionHasBeenSet() const;

                    /**
                     * 获取<p>Installation path of the component on the host</p>
                     * @return Path <p>Installation path of the component on the host</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>Installation path of the component on the host</p>
                     * @param _path <p>Installation path of the component on the host</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>Associated process ID.</p>
                     * @return ProcessID <p>Associated process ID.</p>
                     * 
                     */
                    std::string GetProcessID() const;

                    /**
                     * 设置<p>Associated process ID.</p>
                     * @param _processID <p>Associated process ID.</p>
                     * 
                     */
                    void SetProcessID(const std::string& _processID);

                    /**
                     * 判断参数 ProcessID 是否已赋值
                     * @return ProcessID 是否已赋值
                     * 
                     */
                    bool ProcessIDHasBeenSet() const;

                    /**
                     * 获取<p>Fix Command (only display)</p>
                     * @return FixCommand <p>Fix Command (only display)</p>
                     * 
                     */
                    std::string GetFixCommand() const;

                    /**
                     * 设置<p>Fix Command (only display)</p>
                     * @param _fixCommand <p>Fix Command (only display)</p>
                     * 
                     */
                    void SetFixCommand(const std::string& _fixCommand);

                    /**
                     * 判断参数 FixCommand 是否已赋值
                     * @return FixCommand 是否已赋值
                     * 
                     */
                    bool FixCommandHasBeenSet() const;

                    /**
                     * 获取<p>Component name.</p>
                     * @return Name <p>Component name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Component name.</p>
                     * @param _name <p>Component name.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * <p>Host brief information</p>
                     */
                    HostBriefInfo m_hostInfo;
                    bool m_hostInfoHasBeenSet;

                    /**
                     * <p>Affected component version</p>
                     */
                    std::string m_effectVersion;
                    bool m_effectVersionHasBeenSet;

                    /**
                     * <p>Installation path of the component on the host</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>Associated process ID.</p>
                     */
                    std::string m_processID;
                    bool m_processIDHasBeenSet;

                    /**
                     * <p>Fix Command (only display)</p>
                     */
                    std::string m_fixCommand;
                    bool m_fixCommandHasBeenSet;

                    /**
                     * <p>Component name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULCOMPONENT_H_
