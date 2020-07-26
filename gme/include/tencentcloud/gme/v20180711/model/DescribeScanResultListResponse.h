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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBESCANRESULTLISTRESPONSE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBESCANRESULTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/DescribeScanResult.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeScanResultList response structure.
                */
                class DescribeScanResultListResponse : public AbstractModel
                {
                public:
                    DescribeScanResultListResponse();
                    ~DescribeScanResultListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Result of the speech detection task to be queried
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Data Result of the speech detection task to be queried
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DescribeScanResult> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Result of the speech detection task to be queried
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DescribeScanResult> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBESCANRESULTLISTRESPONSE_H_
