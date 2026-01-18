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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEGLOBALOVERVIEWDATASUMMARYREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEGLOBALOVERVIEWDATASUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * DescribeGlobalOverviewDataSummary request structure.
                */
                class DescribeGlobalOverviewDataSummaryRequest : public AbstractModel
                {
                public:
                    DescribeGlobalOverviewDataSummaryRequest();
                    ~DescribeGlobalOverviewDataSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取string: Overview
                     * @return DataType string: Overview
                     * 
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置string: Overview
                     * @param _dataType string: Overview
                     * 
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取Tenant ID
                     * @return PlatformId Tenant ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Tenant ID
                     * @param _platformId Tenant ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取Date in YYYYMMDD format
                     * @return DataTime Date in YYYYMMDD format
                     * 
                     */
                    int64_t GetDataTime() const;

                    /**
                     * 设置Date in YYYYMMDD format
                     * @param _dataTime Date in YYYYMMDD format
                     * 
                     */
                    void SetDataTime(const int64_t& _dataTime);

                    /**
                     * 判断参数 DataTime 是否已赋值
                     * @return DataTime 是否已赋值
                     * 
                     */
                    bool DataTimeHasBeenSet() const;

                private:

                    /**
                     * string: Overview
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * Tenant ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Date in YYYYMMDD format
                     */
                    int64_t m_dataTime;
                    bool m_dataTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEGLOBALOVERVIEWDATASUMMARYREQUEST_H_
