/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SWITCHINFO_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SWITCHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Log Switch Details
                */
                class SwitchInfo : public AbstractModel
                {
                public:
                    SwitchInfo();
                    ~SwitchInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enables Identifier. true means enabled.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Enable Enables Identifier. true means enabled.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Enables Identifier. true means enabled.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _enable Enables Identifier. true means enabled.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取CLS Logset ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return LogsetId CLS Logset ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置CLS Logset ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _logsetId CLS Logset ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取CLS Log Topic ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return TopicId CLS Log Topic ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置CLS Log Topic ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _topicId CLS Log Topic ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Current log-agent Version
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Version Current log-agent Version
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Current log-agent Version
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _version Current log-agent Version
Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取Upgradable or not

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return UpgradeAble Upgradable or not

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetUpgradeAble() const;

                    /**
                     * 设置Upgradable or not

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _upgradeAble Upgradable or not

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpgradeAble(const bool& _upgradeAble);

                    /**
                     * 判断参数 UpgradeAble 是否已赋值
                     * @return UpgradeAble 是否已赋值
                     * 
                     */
                    bool UpgradeAbleHasBeenSet() const;

                    /**
                     * 获取CLS Log Topic Region
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return TopicRegion CLS Log Topic Region
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTopicRegion() const;

                    /**
                     * 设置CLS Log Topic Region
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _topicRegion CLS Log Topic Region
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTopicRegion(const std::string& _topicRegion);

                    /**
                     * 判断参数 TopicRegion 是否已赋值
                     * @return TopicRegion 是否已赋值
                     * 
                     */
                    bool TopicRegionHasBeenSet() const;

                private:

                    /**
                     * Enables Identifier. true means enabled.
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * CLS Logset ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * CLS Log Topic ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Current log-agent Version
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Upgradable or not

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    bool m_upgradeAble;
                    bool m_upgradeAbleHasBeenSet;

                    /**
                     * CLS Log Topic Region
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_topicRegion;
                    bool m_topicRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SWITCHINFO_H_
