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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYCLUSTERCONFIGSREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYCLUSTERCONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/ConfigSubmitContext.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ModifyClusterConfigs request structure.
                */
                class ModifyClusterConfigsRequest : public AbstractModel
                {
                public:
                    ModifyClusterConfigsRequest();
                    ~ModifyClusterConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID, for example, cdwch-xxxx
                     * @return InstanceId Cluster ID, for example, cdwch-xxxx
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID, for example, cdwch-xxxx
                     * @param _instanceId Cluster ID, for example, cdwch-xxxx
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
                     * 获取Configuration file modification information
                     * @return ModifyConfContext Configuration file modification information
                     * 
                     */
                    std::vector<ConfigSubmitContext> GetModifyConfContext() const;

                    /**
                     * 设置Configuration file modification information
                     * @param _modifyConfContext Configuration file modification information
                     * 
                     */
                    void SetModifyConfContext(const std::vector<ConfigSubmitContext>& _modifyConfContext);

                    /**
                     * 判断参数 ModifyConfContext 是否已赋值
                     * @return ModifyConfContext 是否已赋值
                     * 
                     */
                    bool ModifyConfContextHasBeenSet() const;

                    /**
                     * 获取Reason for modification
                     * @return Remark Reason for modification
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Reason for modification
                     * @param _remark Reason for modification
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Cluster ID, for example, cdwch-xxxx
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Configuration file modification information
                     */
                    std::vector<ConfigSubmitContext> m_modifyConfContext;
                    bool m_modifyConfContextHasBeenSet;

                    /**
                     * Reason for modification
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYCLUSTERCONFIGSREQUEST_H_
