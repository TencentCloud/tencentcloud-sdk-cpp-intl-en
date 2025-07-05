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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_COPYACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_COPYACCOUNTPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
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
                     * 获取Instance ID, which is in the format of `tdsql-ow728lmc` and can be obtained through the `DescribeDBInstances` API.
                     * @return InstanceId Instance ID, which is in the format of `tdsql-ow728lmc` and can be obtained through the `DescribeDBInstances` API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, which is in the format of `tdsql-ow728lmc` and can be obtained through the `DescribeDBInstances` API.
                     * @param _instanceId Instance ID, which is in the format of `tdsql-ow728lmc` and can be obtained through the `DescribeDBInstances` API.
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
                     * 获取Access host allowed for source user
                     * @return SrcHost Access host allowed for source user
                     * 
                     */
                    std::string GetSrcHost() const;

                    /**
                     * 设置Access host allowed for source user
                     * @param _srcHost Access host allowed for source user
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
                     * 获取Access host allowed for target user
                     * @return DstHost Access host allowed for target user
                     * 
                     */
                    std::string GetDstHost() const;

                    /**
                     * 设置Access host allowed for target user
                     * @param _dstHost Access host allowed for target user
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
                     * 获取`ReadOnly` attribute of source account
                     * @return SrcReadOnly `ReadOnly` attribute of source account
                     * 
                     */
                    std::string GetSrcReadOnly() const;

                    /**
                     * 设置`ReadOnly` attribute of source account
                     * @param _srcReadOnly `ReadOnly` attribute of source account
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
                     * 获取`ReadOnly` attribute of target account
                     * @return DstReadOnly `ReadOnly` attribute of target account
                     * 
                     */
                    std::string GetDstReadOnly() const;

                    /**
                     * 设置`ReadOnly` attribute of target account
                     * @param _dstReadOnly `ReadOnly` attribute of target account
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
                     * Instance ID, which is in the format of `tdsql-ow728lmc` and can be obtained through the `DescribeDBInstances` API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Source username
                     */
                    std::string m_srcUserName;
                    bool m_srcUserNameHasBeenSet;

                    /**
                     * Access host allowed for source user
                     */
                    std::string m_srcHost;
                    bool m_srcHostHasBeenSet;

                    /**
                     * Target username
                     */
                    std::string m_dstUserName;
                    bool m_dstUserNameHasBeenSet;

                    /**
                     * Access host allowed for target user
                     */
                    std::string m_dstHost;
                    bool m_dstHostHasBeenSet;

                    /**
                     * `ReadOnly` attribute of source account
                     */
                    std::string m_srcReadOnly;
                    bool m_srcReadOnlyHasBeenSet;

                    /**
                     * `ReadOnly` attribute of target account
                     */
                    std::string m_dstReadOnly;
                    bool m_dstReadOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_COPYACCOUNTPRIVILEGESREQUEST_H_
