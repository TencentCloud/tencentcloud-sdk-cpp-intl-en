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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETEGOVERNANCELANEGROUP_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETEGOVERNANCELANEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/LaneTrafficEntry.h>
#include <tencentcloud/tse/v20201207/model/GovernanceServiceDestination.h>
#include <tencentcloud/tse/v20201207/model/GovernanceLaneRule.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Lane group
                */
                class DeleteGovernanceLaneGroup : public AbstractModel
                {
                public:
                    DeleteGovernanceLaneGroup();
                    ~DeleteGovernanceLaneGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取lane name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name lane name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置lane name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name lane name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Lane group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ID Lane group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置Lane group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iD Lane group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Lane entry service list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TrafficEntries Lane entry service list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LaneTrafficEntry> GetTrafficEntries() const;

                    /**
                     * 设置Lane entry service list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _trafficEntries Lane entry service list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTrafficEntries(const std::vector<LaneTrafficEntry>& _trafficEntries);

                    /**
                     * 判断参数 TrafficEntries 是否已赋值
                     * @return TrafficEntries 是否已赋值
                     * 
                     */
                    bool TrafficEntriesHasBeenSet() const;

                    /**
                     * 获取Lane service list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Destinations Lane service list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<GovernanceServiceDestination> GetDestinations() const;

                    /**
                     * 设置Lane service list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _destinations Lane service list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDestinations(const std::vector<GovernanceServiceDestination>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     * 
                     */
                    bool DestinationsHasBeenSet() const;

                    /**
                     * 获取Lane group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Lane group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Lane group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Lane group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Rule content summary
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Revision Rule content summary
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRevision() const;

                    /**
                     * 设置Rule content summary
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _revision Rule content summary
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRevision(const std::string& _revision);

                    /**
                     * 判断参数 Revision 是否已赋值
                     * @return Revision 是否已赋值
                     * 
                     */
                    bool RevisionHasBeenSet() const;

                    /**
                     * 获取Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyTime Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Rule consistency status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Consistency Rule consistency status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConsistency() const;

                    /**
                     * 设置Rule consistency status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consistency Rule consistency status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConsistency(const std::string& _consistency);

                    /**
                     * 判断参数 Consistency 是否已赋值
                     * @return Consistency 是否已赋值
                     * 
                     */
                    bool ConsistencyHasBeenSet() const;

                    /**
                     * 获取Lane rule list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Rules Lane rule list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<GovernanceLaneRule> GetRules() const;

                    /**
                     * 设置Lane rule list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rules Lane rule list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRules(const std::vector<GovernanceLaneRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * lane name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Lane group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Lane entry service list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LaneTrafficEntry> m_trafficEntries;
                    bool m_trafficEntriesHasBeenSet;

                    /**
                     * Lane service list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<GovernanceServiceDestination> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * Lane group description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Rule content summary
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_revision;
                    bool m_revisionHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Rule consistency status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_consistency;
                    bool m_consistencyHasBeenSet;

                    /**
                     * Lane rule list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<GovernanceLaneRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETEGOVERNANCELANEGROUP_H_
