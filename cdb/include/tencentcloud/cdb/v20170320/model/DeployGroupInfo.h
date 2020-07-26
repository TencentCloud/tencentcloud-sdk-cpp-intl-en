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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DEPLOYGROUPINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DEPLOYGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Placement group information
                */
                class DeployGroupInfo : public AbstractModel
                {
                public:
                    DeployGroupInfo();
                    ~DeployGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of a placement group.
                     * @return DeployGroupId ID of a placement group.
                     */
                    std::string GetDeployGroupId() const;

                    /**
                     * 设置ID of a placement group.
                     * @param DeployGroupId ID of a placement group.
                     */
                    void SetDeployGroupId(const std::string& _deployGroupId);

                    /**
                     * 判断参数 DeployGroupId 是否已赋值
                     * @return DeployGroupId 是否已赋值
                     */
                    bool DeployGroupIdHasBeenSet() const;

                    /**
                     * 获取Name of a placement group.
                     * @return DeployGroupName Name of a placement group.
                     */
                    std::string GetDeployGroupName() const;

                    /**
                     * 设置Name of a placement group.
                     * @param DeployGroupName Name of a placement group.
                     */
                    void SetDeployGroupName(const std::string& _deployGroupName);

                    /**
                     * 判断参数 DeployGroupName 是否已赋值
                     * @return DeployGroupName 是否已赋值
                     */
                    bool DeployGroupNameHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param CreateTime Creation time.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Instance quota of placement group, indicating the maximum number of instances that can be placed in one placement group.
                     * @return Quota Instance quota of placement group, indicating the maximum number of instances that can be placed in one placement group.
                     */
                    int64_t GetQuota() const;

                    /**
                     * 设置Instance quota of placement group, indicating the maximum number of instances that can be placed in one placement group.
                     * @param Quota Instance quota of placement group, indicating the maximum number of instances that can be placed in one placement group.
                     */
                    void SetQuota(const int64_t& _quota);

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     */
                    bool QuotaHasBeenSet() const;

                    /**
                     * 获取Affinity policy of placement group. Currently, only policy 1 is supported, indicating to distribute instances across physical machines.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Affinity Affinity policy of placement group. Currently, only policy 1 is supported, indicating to distribute instances across physical machines.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAffinity() const;

                    /**
                     * 设置Affinity policy of placement group. Currently, only policy 1 is supported, indicating to distribute instances across physical machines.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Affinity Affinity policy of placement group. Currently, only policy 1 is supported, indicating to distribute instances across physical machines.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAffinity(const std::string& _affinity);

                    /**
                     * 判断参数 Affinity 是否已赋值
                     * @return Affinity 是否已赋值
                     */
                    bool AffinityHasBeenSet() const;

                    /**
                     * 获取Upper limit of instances in one placement group on one physical machine as defined in affinity policy 1 of placement group.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LimitNum Upper limit of instances in one placement group on one physical machine as defined in affinity policy 1 of placement group.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetLimitNum() const;

                    /**
                     * 设置Upper limit of instances in one placement group on one physical machine as defined in affinity policy 1 of placement group.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param LimitNum Upper limit of instances in one placement group on one physical machine as defined in affinity policy 1 of placement group.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLimitNum(const int64_t& _limitNum);

                    /**
                     * 判断参数 LimitNum 是否已赋值
                     * @return LimitNum 是否已赋值
                     */
                    bool LimitNumHasBeenSet() const;

                    /**
                     * 获取Placement group details.
                     * @return Description Placement group details.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Placement group details.
                     * @param Description Placement group details.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Physical model attribute of placement group.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DevClass Physical model attribute of placement group.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDevClass() const;

                    /**
                     * 设置Physical model attribute of placement group.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DevClass Physical model attribute of placement group.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDevClass(const std::string& _devClass);

                    /**
                     * 判断参数 DevClass 是否已赋值
                     * @return DevClass 是否已赋值
                     */
                    bool DevClassHasBeenSet() const;

                private:

                    /**
                     * ID of a placement group.
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * Name of a placement group.
                     */
                    std::string m_deployGroupName;
                    bool m_deployGroupNameHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Instance quota of placement group, indicating the maximum number of instances that can be placed in one placement group.
                     */
                    int64_t m_quota;
                    bool m_quotaHasBeenSet;

                    /**
                     * Affinity policy of placement group. Currently, only policy 1 is supported, indicating to distribute instances across physical machines.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_affinity;
                    bool m_affinityHasBeenSet;

                    /**
                     * Upper limit of instances in one placement group on one physical machine as defined in affinity policy 1 of placement group.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_limitNum;
                    bool m_limitNumHasBeenSet;

                    /**
                     * Placement group details.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Physical model attribute of placement group.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_devClass;
                    bool m_devClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DEPLOYGROUPINFO_H_
