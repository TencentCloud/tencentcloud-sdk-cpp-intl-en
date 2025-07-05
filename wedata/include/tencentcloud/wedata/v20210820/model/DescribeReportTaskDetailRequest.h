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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREPORTTASKDETAILREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREPORTTASKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeReportTaskDetail request structure.
                */
                class DescribeReportTaskDetailRequest : public AbstractModel
                {
                public:
                    DescribeReportTaskDetailRequest();
                    ~DescribeReportTaskDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tenant id.
                     * @return TenantId Tenant id.
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置Tenant id.
                     * @param _tenantId Tenant id.
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取Engine task id.
                     * @return EngineTaskId Engine task id.
                     * 
                     */
                    std::string GetEngineTaskId() const;

                    /**
                     * 设置Engine task id.
                     * @param _engineTaskId Engine task id.
                     * 
                     */
                    void SetEngineTaskId(const std::string& _engineTaskId);

                    /**
                     * 判断参数 EngineTaskId 是否已赋值
                     * @return EngineTaskId 是否已赋值
                     * 
                     */
                    bool EngineTaskIdHasBeenSet() const;

                private:

                    /**
                     * Tenant id.
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * Engine task id.
                     */
                    std::string m_engineTaskId;
                    bool m_engineTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREPORTTASKDETAILREQUEST_H_
