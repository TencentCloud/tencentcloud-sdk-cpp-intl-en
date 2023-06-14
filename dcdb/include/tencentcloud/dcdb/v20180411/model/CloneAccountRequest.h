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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_CLONEACCOUNTREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_CLONEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * CloneAccount request structure.
                */
                class CloneAccountRequest : public AbstractModel
                {
                public:
                    CloneAccountRequest();
                    ~CloneAccountRequest() = default;
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
                     * 获取Source user account name
                     * @return SrcUser Source user account name
                     * 
                     */
                    std::string GetSrcUser() const;

                    /**
                     * 设置Source user account name
                     * @param _srcUser Source user account name
                     * 
                     */
                    void SetSrcUser(const std::string& _srcUser);

                    /**
                     * 判断参数 SrcUser 是否已赋值
                     * @return SrcUser 是否已赋值
                     * 
                     */
                    bool SrcUserHasBeenSet() const;

                    /**
                     * 获取Source user host
                     * @return SrcHost Source user host
                     * 
                     */
                    std::string GetSrcHost() const;

                    /**
                     * 设置Source user host
                     * @param _srcHost Source user host
                     * 
                     */
                    void SetSrcHost(const std::string& _srcHost);

                    /**
                     * 判断参数 SrcHost 是否已赋值
                     * @return SrcHost 是否已赋值
                     * 
                     */
                    bool SrcHostHasBeenSet() const;

                    /**
                     * 获取Target user account name
                     * @return DstUser Target user account name
                     * 
                     */
                    std::string GetDstUser() const;

                    /**
                     * 设置Target user account name
                     * @param _dstUser Target user account name
                     * 
                     */
                    void SetDstUser(const std::string& _dstUser);

                    /**
                     * 判断参数 DstUser 是否已赋值
                     * @return DstUser 是否已赋值
                     * 
                     */
                    bool DstUserHasBeenSet() const;

                    /**
                     * 获取Target user host
                     * @return DstHost Target user host
                     * 
                     */
                    std::string GetDstHost() const;

                    /**
                     * 设置Target user host
                     * @param _dstHost Target user host
                     * 
                     */
                    void SetDstHost(const std::string& _dstHost);

                    /**
                     * 判断参数 DstHost 是否已赋值
                     * @return DstHost 是否已赋值
                     * 
                     */
                    bool DstHostHasBeenSet() const;

                    /**
                     * 获取Target account description
                     * @return DstDesc Target account description
                     * 
                     */
                    std::string GetDstDesc() const;

                    /**
                     * 设置Target account description
                     * @param _dstDesc Target account description
                     * 
                     */
                    void SetDstDesc(const std::string& _dstDesc);

                    /**
                     * 判断参数 DstDesc 是否已赋值
                     * @return DstDesc 是否已赋值
                     * 
                     */
                    bool DstDescHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Source user account name
                     */
                    std::string m_srcUser;
                    bool m_srcUserHasBeenSet;

                    /**
                     * Source user host
                     */
                    std::string m_srcHost;
                    bool m_srcHostHasBeenSet;

                    /**
                     * Target user account name
                     */
                    std::string m_dstUser;
                    bool m_dstUserHasBeenSet;

                    /**
                     * Target user host
                     */
                    std::string m_dstHost;
                    bool m_dstHostHasBeenSet;

                    /**
                     * Target account description
                     */
                    std::string m_dstDesc;
                    bool m_dstDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_CLONEACCOUNTREQUEST_H_
