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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHCOSRECHARGEINFORESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHCOSRECHARGEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * SearchCosRechargeInfo response structure.
                */
                class SearchCosRechargeInfoResponse : public AbstractModel
                {
                public:
                    SearchCosRechargeInfoResponse();
                    ~SearchCosRechargeInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The first few lines of a file under a matched bucketNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Data The first few lines of a file under a matched bucketNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Number of files under the matched bucket
                     * @return Sum Number of files under the matched bucket
                     * 
                     */
                    uint64_t GetSum() const;

                    /**
                     * 判断参数 Sum 是否已赋值
                     * @return Sum 是否已赋值
                     * 
                     */
                    bool SumHasBeenSet() const;

                    /**
                     * 获取Current preview file path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Path Current preview file path
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Reason for preview data retrieval failureNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Msg Reason for preview data retrieval failureNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * The first few lines of a file under a matched bucketNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Number of files under the matched bucket
                     */
                    uint64_t m_sum;
                    bool m_sumHasBeenSet;

                    /**
                     * Current preview file path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Reason for preview data retrieval failureNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * Status
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHCOSRECHARGEINFORESPONSE_H_
