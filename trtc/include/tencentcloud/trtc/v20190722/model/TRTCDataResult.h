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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCDATARESULT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCDATARESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/SeriesInfos.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * TRTC Data Dashboard/Real-Time Monitoring API output parameters
                */
                class TRTCDataResult : public AbstractModel
                {
                public:
                    TRTCDataResult();
                    ~TRTCDataResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取StatementID value, fixed at 0 for Monitoring Dashboard.
                     * @return StatementID StatementID value, fixed at 0 for Monitoring Dashboard.
                     * 
                     */
                    int64_t GetStatementID() const;

                    /**
                     * 设置StatementID value, fixed at 0 for Monitoring Dashboard.
                     * @param _statementID StatementID value, fixed at 0 for Monitoring Dashboard.
                     * 
                     */
                    void SetStatementID(const int64_t& _statementID);

                    /**
                     * 判断参数 StatementID 是否已赋值
                     * @return StatementID 是否已赋值
                     * 
                     */
                    bool StatementIDHasBeenSet() const;

                    /**
                     * 获取Query result data, returned in Columns-Values format.
                     * @return Series Query result data, returned in Columns-Values format.
                     * 
                     */
                    std::vector<SeriesInfos> GetSeries() const;

                    /**
                     * 设置Query result data, returned in Columns-Values format.
                     * @param _series Query result data, returned in Columns-Values format.
                     * 
                     */
                    void SetSeries(const std::vector<SeriesInfos>& _series);

                    /**
                     * 判断参数 Series 是否已赋值
                     * @return Series 是否已赋值
                     * 
                     */
                    bool SeriesHasBeenSet() const;

                    /**
                     * 获取Total value, fixed at 1 for Monitoring Dashboard.
                     * @return Total Total value, fixed at 1 for Monitoring Dashboard.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Total value, fixed at 1 for Monitoring Dashboard.
                     * @param _total Total value, fixed at 1 for Monitoring Dashboard.
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * StatementID value, fixed at 0 for Monitoring Dashboard.
                     */
                    int64_t m_statementID;
                    bool m_statementIDHasBeenSet;

                    /**
                     * Query result data, returned in Columns-Values format.
                     */
                    std::vector<SeriesInfos> m_series;
                    bool m_seriesHasBeenSet;

                    /**
                     * Total value, fixed at 1 for Monitoring Dashboard.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCDATARESULT_H_
