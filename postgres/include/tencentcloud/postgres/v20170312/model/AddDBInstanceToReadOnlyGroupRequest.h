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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_ADDDBINSTANCETOREADONLYGROUPREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_ADDDBINSTANCETOREADONLYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AddDBInstanceToReadOnlyGroup request structure.
                */
                class AddDBInstanceToReadOnlyGroupRequest : public AbstractModel
                {
                public:
                    AddDBInstanceToReadOnlyGroupRequest();
                    ~AddDBInstanceToReadOnlyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @return DBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @param _dBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取ReadOnlyGroupId. specifies the read-only group ID, which can be obtained through the api [DescribeReadOnlyGroups](https://www.tencentcloud.com/document/product/409/39725).
                     * @return ReadOnlyGroupId ReadOnlyGroupId. specifies the read-only group ID, which can be obtained through the api [DescribeReadOnlyGroups](https://www.tencentcloud.com/document/product/409/39725).
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置ReadOnlyGroupId. specifies the read-only group ID, which can be obtained through the api [DescribeReadOnlyGroups](https://www.tencentcloud.com/document/product/409/39725).
                     * @param _readOnlyGroupId ReadOnlyGroupId. specifies the read-only group ID, which can be obtained through the api [DescribeReadOnlyGroups](https://www.tencentcloud.com/document/product/409/39725).
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * ReadOnlyGroupId. specifies the read-only group ID, which can be obtained through the api [DescribeReadOnlyGroups](https://www.tencentcloud.com/document/product/409/39725).
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_ADDDBINSTANCETOREADONLYGROUPREQUEST_H_
