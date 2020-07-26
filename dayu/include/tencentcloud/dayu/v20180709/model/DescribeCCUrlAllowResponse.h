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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCURLALLOWRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCURLALLOWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/KeyValue.h>
#include <tencentcloud/dayu/v20180709/model/KeyValueRecord.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCCUrlAllow response structure.
                */
                class DescribeCCUrlAllowResponse : public AbstractModel
                {
                public:
                    DescribeCCUrlAllowResponse();
                    ~DescribeCCUrlAllowResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取This field has been replaced by `RecordList` and should not be used
                     * @return Data This field has been replaced by `RecordList` and should not be used
                     */
                    std::vector<KeyValue> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Total number of records
                     * @return Total Total number of records
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Returned Blacklist/whitelist record,
If "Key":"url", "Value": URL;
If "Key":"domain", "Value": domain name.
If "Key":"type", "Value" can be `white` (whitelist) or `black` (blacklist).
If "Key":"protocol", "Value": CC protection type (HTTP protection or HTTPS domain name protection);
                     * @return RecordList Returned Blacklist/whitelist record,
If "Key":"url", "Value": URL;
If "Key":"domain", "Value": domain name.
If "Key":"type", "Value" can be `white` (whitelist) or `black` (blacklist).
If "Key":"protocol", "Value": CC protection type (HTTP protection or HTTPS domain name protection);
                     */
                    std::vector<KeyValueRecord> GetRecordList() const;

                    /**
                     * 判断参数 RecordList 是否已赋值
                     * @return RecordList 是否已赋值
                     */
                    bool RecordListHasBeenSet() const;

                private:

                    /**
                     * This field has been replaced by `RecordList` and should not be used
                     */
                    std::vector<KeyValue> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Total number of records
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Returned Blacklist/whitelist record,
If "Key":"url", "Value": URL;
If "Key":"domain", "Value": domain name.
If "Key":"type", "Value" can be `white` (whitelist) or `black` (blacklist).
If "Key":"protocol", "Value": CC protection type (HTTP protection or HTTPS domain name protection);
                     */
                    std::vector<KeyValueRecord> m_recordList;
                    bool m_recordListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCURLALLOWRESPONSE_H_
