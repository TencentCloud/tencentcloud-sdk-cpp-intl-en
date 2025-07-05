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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDNSDATARESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDNSDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DataItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeDnsData response structure.
                */
                class DescribeDnsDataResponse : public AbstractModel
                {
                public:
                    DescribeDnsDataResponse();
                    ~DescribeDnsDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DNS request data
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Data DNS request data
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<DataItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Interval
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Interval Interval
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * DNS request data
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<DataItem> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Interval
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDNSDATARESPONSE_H_
