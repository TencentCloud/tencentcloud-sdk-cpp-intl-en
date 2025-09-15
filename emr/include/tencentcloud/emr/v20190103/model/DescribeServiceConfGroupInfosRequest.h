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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICECONFGROUPINFOSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICECONFGROUPINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeServiceConfGroupInfos request structure.
                */
                class DescribeServiceConfGroupInfosRequest : public AbstractModel
                {
                public:
                    DescribeServiceConfGroupInfosRequest();
                    ~DescribeServiceConfGroupInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return InstanceId Cluster ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _instanceId Cluster ID.
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
                     * 获取Component name.
                     * @return ServiceName Component name.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Component name.
                     * @param _serviceName Component name.
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Configuration group name.
                     * @return ConfGroupName Configuration group name.
                     * 
                     */
                    std::string GetConfGroupName() const;

                    /**
                     * 设置Configuration group name.
                     * @param _confGroupName Configuration group name.
                     * 
                     */
                    void SetConfGroupName(const std::string& _confGroupName);

                    /**
                     * 判断参数 ConfGroupName 是否已赋值
                     * @return ConfGroupName 是否已赋值
                     * 
                     */
                    bool ConfGroupNameHasBeenSet() const;

                    /**
                     * 获取Page number, starting from 1.
                     * @return PageNo Page number, starting from 1.
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置Page number, starting from 1.
                     * @param _pageNo Page number, starting from 1.
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取Page size.
                     * @return PageSize Page size.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size.
                     * @param _pageSize Page size.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Component name.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Configuration group name.
                     */
                    std::string m_confGroupName;
                    bool m_confGroupNameHasBeenSet;

                    /**
                     * Page number, starting from 1.
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * Page size.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICECONFGROUPINFOSREQUEST_H_
