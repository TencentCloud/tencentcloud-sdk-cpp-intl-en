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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSINSTANCEREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trabbit/v20230418/model/RabbitMQServerlessTag.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyRabbitMQServerlessInstance request structure.
                */
                class ModifyRabbitMQServerlessInstanceRequest : public AbstractModel
                {
                public:
                    ModifyRabbitMQServerlessInstanceRequest();
                    ~ModifyRabbitMQServerlessInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Cluster name.
                     * @return ClusterName Cluster name.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name.
                     * @param _clusterName Cluster name.
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Whether trace is enabled.
                     * @return TraceFlag Whether trace is enabled.
                     * 
                     */
                    bool GetTraceFlag() const;

                    /**
                     * 设置Whether trace is enabled.
                     * @param _traceFlag Whether trace is enabled.
                     * 
                     */
                    void SetTraceFlag(const bool& _traceFlag);

                    /**
                     * 判断参数 TraceFlag 是否已赋值
                     * @return TraceFlag 是否已赋值
                     * 
                     */
                    bool TraceFlagHasBeenSet() const;

                    /**
                     * 获取Traffic throttling production consumption ratio
                     * @return SendReceiveRatio Traffic throttling production consumption ratio
                     * 
                     */
                    double GetSendReceiveRatio() const;

                    /**
                     * 设置Traffic throttling production consumption ratio
                     * @param _sendReceiveRatio Traffic throttling production consumption ratio
                     * 
                     */
                    void SetSendReceiveRatio(const double& _sendReceiveRatio);

                    /**
                     * 判断参数 SendReceiveRatio 是否已赋值
                     * @return SendReceiveRatio 是否已赋值
                     * 
                     */
                    bool SendReceiveRatioHasBeenSet() const;

                    /**
                     * 获取Specifies whether to delete all tags. Default value: false.
                     * @return DeleteAllTags Specifies whether to delete all tags. Default value: false.
                     * 
                     */
                    bool GetDeleteAllTags() const;

                    /**
                     * 设置Specifies whether to delete all tags. Default value: false.
                     * @param _deleteAllTags Specifies whether to delete all tags. Default value: false.
                     * 
                     */
                    void SetDeleteAllTags(const bool& _deleteAllTags);

                    /**
                     * 判断参数 DeleteAllTags 是否已赋值
                     * @return DeleteAllTags 是否已赋值
                     * 
                     */
                    bool DeleteAllTagsHasBeenSet() const;

                    /**
                     * 获取Modified instance tag list
                     * @return InstanceTags Modified instance tag list
                     * 
                     */
                    std::vector<RabbitMQServerlessTag> GetInstanceTags() const;

                    /**
                     * 设置Modified instance tag list
                     * @param _instanceTags Modified instance tag list
                     * 
                     */
                    void SetInstanceTags(const std::vector<RabbitMQServerlessTag>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     * 
                     */
                    bool InstanceTagsHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Cluster name.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Whether trace is enabled.
                     */
                    bool m_traceFlag;
                    bool m_traceFlagHasBeenSet;

                    /**
                     * Traffic throttling production consumption ratio
                     */
                    double m_sendReceiveRatio;
                    bool m_sendReceiveRatioHasBeenSet;

                    /**
                     * Specifies whether to delete all tags. Default value: false.
                     */
                    bool m_deleteAllTags;
                    bool m_deleteAllTagsHasBeenSet;

                    /**
                     * Modified instance tag list
                     */
                    std::vector<RabbitMQServerlessTag> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSINSTANCEREQUEST_H_
