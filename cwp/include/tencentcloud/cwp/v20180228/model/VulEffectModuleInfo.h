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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULEFFECTMODULEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULEFFECTMODULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Details of components affected by vulnerabilities
                */
                class VulEffectModuleInfo : public AbstractModel
                {
                public:
                    VulEffectModuleInfo();
                    ~VulEffectModuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Component name
                     * @return Name Component name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Component name
                     * @param _name Component name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Affected host uuid
                     * @return Uuids Affected host uuid
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置Affected host uuid
                     * @param _uuids Affected host uuid
                     * 
                     */
                    void SetUuids(const std::vector<std::string>& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                    /**
                     * 获取Affected component version
                     * @return Rule Affected component version
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置Affected component version
                     * @param _rule Affected component version
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Component path
                     * @return Path Component path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Component path
                     * @param _path Component path
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
                     * 获取Component version
                     * @return Version Component version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Component version
                     * @param _version Component version
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
                     * 获取Fix Command
                     * @return FixCmd Fix Command
                     * 
                     */
                    std::string GetFixCmd() const;

                    /**
                     * 设置Fix Command
                     * @param _fixCmd Fix Command
                     * 
                     */
                    void SetFixCmd(const std::string& _fixCmd);

                    /**
                     * 判断参数 FixCmd 是否已赋值
                     * @return FixCmd 是否已赋值
                     * 
                     */
                    bool FixCmdHasBeenSet() const;

                    /**
                     * 获取Affected host quuid
                     * @return Quuids Affected host quuid
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置Affected host quuid
                     * @param _quuids Affected host quuid
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                private:

                    /**
                     * Component name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Affected host uuid
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * Affected component version
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Component path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Component version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Fix Command
                     */
                    std::string m_fixCmd;
                    bool m_fixCmdHasBeenSet;

                    /**
                     * Affected host quuid
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULEFFECTMODULEINFO_H_
