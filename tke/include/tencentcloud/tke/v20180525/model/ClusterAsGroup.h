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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERASGROUP_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERASGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Cluster-associated scaling group information
                */
                class ClusterAsGroup : public AbstractModel
                {
                public:
                    ClusterAsGroup();
                    ~ClusterAsGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scaling group ID
                     * @return AutoScalingGroupId Scaling group ID
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Scaling group ID
                     * @param _autoScalingGroupId Scaling group ID
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取Scaling group status (`enabled`, `enabling`, `disabled`, `disabling`, `updating`, `deleting`, `scaleDownEnabling`, `scaleDownDisabling`)
                     * @return Status Scaling group status (`enabled`, `enabling`, `disabled`, `disabling`, `updating`, `deleting`, `scaleDownEnabling`, `scaleDownDisabling`)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Scaling group status (`enabled`, `enabling`, `disabled`, `disabling`, `updating`, `deleting`, `scaleDownEnabling`, `scaleDownDisabling`)
                     * @param _status Scaling group status (`enabled`, `enabling`, `disabled`, `disabling`, `updating`, `deleting`, `scaleDownEnabling`, `scaleDownDisabling`)
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether the node is set to unschedulable
Note: this field may return null, indicating that no valid value was found.
                     * @return IsUnschedulable Whether the node is set to unschedulable
Note: this field may return null, indicating that no valid value was found.
                     * 
                     */
                    bool GetIsUnschedulable() const;

                    /**
                     * 设置Whether the node is set to unschedulable
Note: this field may return null, indicating that no valid value was found.
                     * @param _isUnschedulable Whether the node is set to unschedulable
Note: this field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetIsUnschedulable(const bool& _isUnschedulable);

                    /**
                     * 判断参数 IsUnschedulable 是否已赋值
                     * @return IsUnschedulable 是否已赋值
                     * 
                     */
                    bool IsUnschedulableHasBeenSet() const;

                    /**
                     * 获取Scaling group label list
Note: this field may return null, indicating that no valid value was found.
                     * @return Labels Scaling group label list
Note: this field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Scaling group label list
Note: this field may return null, indicating that no valid value was found.
                     * @param _labels Scaling group label list
Note: this field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedTime Creation time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time
                     * @param _createdTime Creation time
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * Scaling group ID
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Scaling group status (`enabled`, `enabling`, `disabled`, `disabling`, `updating`, `deleting`, `scaleDownEnabling`, `scaleDownDisabling`)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether the node is set to unschedulable
Note: this field may return null, indicating that no valid value was found.
                     */
                    bool m_isUnschedulable;
                    bool m_isUnschedulableHasBeenSet;

                    /**
                     * Scaling group label list
Note: this field may return null, indicating that no valid value was found.
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERASGROUP_H_
