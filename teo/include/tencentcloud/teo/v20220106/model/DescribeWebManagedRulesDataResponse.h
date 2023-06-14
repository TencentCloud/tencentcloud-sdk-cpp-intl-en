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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEWEBMANAGEDRULESDATARESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEWEBMANAGEDRULESDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/SecEntry.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeWebManagedRulesData response structure.
                */
                class DescribeWebManagedRulesDataResponse : public AbstractModel
                {
                public:
                    DescribeWebManagedRulesDataResponse();
                    ~DescribeWebManagedRulesDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Web attack log entity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data Web attack log entity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SecEntry> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Status. 1: failed; 0: succeeded
                     * @return Status Status. 1: failed; 0: succeeded
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Returned message
                     * @return Msg Returned message
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取Query time granularity. Valid values: {min,5min,hour,day}
                     * @return Interval Query time granularity. Valid values: {min,5min,hour,day}
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
                     * Web attack log entity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SecEntry> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Status. 1: failed; 0: succeeded
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Returned message
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * Query time granularity. Valid values: {min,5min,hour,day}
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEWEBMANAGEDRULESDATARESPONSE_H_
