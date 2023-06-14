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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_COPYACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_COPYACCOUNTPRIVILEGESREQUEST_H_

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
                * CopyAccountPrivileges request structure.
                */
                class CopyAccountPrivilegesRequest : public AbstractModel
                {
                public:
                    CopyAccountPrivilegesRequest();
                    ~CopyAccountPrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of dcdbt-ow728lmc.
                     * @return InstanceId Instance ID in the format of dcdbt-ow728lmc.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of dcdbt-ow728lmc.
                     * @param _instanceId Instance ID in the format of dcdbt-ow728lmc.
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
                     * 获取Source username
                     * @return SrcUserName Source username
                     * 
                     */
                    std::string GetSrcUserName() const;

                    /**
                     * 设置Source username
                     * @param _srcUserName Source username
                     * 
                     */
                    void SetSrcUserName(const std::string& _srcUserName);

                    /**
                     * 判断参数 SrcUserName 是否已赋值
                     * @return SrcUserName 是否已赋值
                     * 
                     */
                    bool SrcUserNameHasBeenSet() const;

                    /**
                     * 获取Access host allowed for a source user
                     * @return SrcHost Access host allowed for a source user
                     * 
                     */
                    std::string GetSrcHost() const;

                    /**
                     * 设置Access host allowed for a source user
                     * @param _srcHost Access host allowed for a source user
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
                     * 获取Target username
                     * @return DstUserName Target username
                     * 
                     */
                    std::string GetDstUserName() const;

                    /**
                     * 设置Target username
                     * @param _dstUserName Target username
                     * 
                     */
                    void SetDstUserName(const std::string& _dstUserName);

                    /**
                     * 判断参数 DstUserName 是否已赋值
                     * @return DstUserName 是否已赋值
                     * 
                     */
                    bool DstUserNameHasBeenSet() const;

                    /**
                     * 获取Access host allowed for a target user
                     * @return DstHost Access host allowed for a target user
                     * 
                     */
                    std::string GetDstHost() const;

                    /**
                     * 设置Access host allowed for a target user
                     * @param _dstHost Access host allowed for a target user
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
                     * 获取`ReadOnly` attribute of a source account
                     * @return SrcReadOnly `ReadOnly` attribute of a source account
                     * 
                     */
                    std::string GetSrcReadOnly() const;

                    /**
                     * 设置`ReadOnly` attribute of a source account
                     * @param _srcReadOnly `ReadOnly` attribute of a source account
                     * 
                     */
                    void SetSrcReadOnly(const std::string& _srcReadOnly);

                    /**
                     * 判断参数 SrcReadOnly 是否已赋值
                     * @return SrcReadOnly 是否已赋值
                     * 
                     */
                    bool SrcReadOnlyHasBeenSet() const;

                    /**
                     * 获取`ReadOnly` attribute of a target account
                     * @return DstReadOnly `ReadOnly` attribute of a target account
                     * 
                     */
                    std::string GetDstReadOnly() const;

                    /**
                     * 设置`ReadOnly` attribute of a target account
                     * @param _dstReadOnly `ReadOnly` attribute of a target account
                     * 
                     */
                    void SetDstReadOnly(const std::string& _dstReadOnly);

                    /**
                     * 判断参数 DstReadOnly 是否已赋值
                     * @return DstReadOnly 是否已赋值
                     * 
                     */
                    bool DstReadOnlyHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of dcdbt-ow728lmc.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Source username
                     */
                    std::string m_srcUserName;
                    bool m_srcUserNameHasBeenSet;

                    /**
                     * Access host allowed for a source user
                     */
                    std::string m_srcHost;
                    bool m_srcHostHasBeenSet;

                    /**
                     * Target username
                     */
                    std::string m_dstUserName;
                    bool m_dstUserNameHasBeenSet;

                    /**
                     * Access host allowed for a target user
                     */
                    std::string m_dstHost;
                    bool m_dstHostHasBeenSet;

                    /**
                     * `ReadOnly` attribute of a source account
                     */
                    std::string m_srcReadOnly;
                    bool m_srcReadOnlyHasBeenSet;

                    /**
                     * `ReadOnly` attribute of a target account
                     */
                    std::string m_dstReadOnly;
                    bool m_dstReadOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_COPYACCOUNTPRIVILEGESREQUEST_H_
