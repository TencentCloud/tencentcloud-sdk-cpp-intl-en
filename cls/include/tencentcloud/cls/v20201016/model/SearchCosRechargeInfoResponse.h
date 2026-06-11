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
                     * 获取First few lines of data from a certain file under the matched bucket
                     * @return Data First few lines of data from a certain file under the matched bucket
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
                     * @return Path Current preview file path
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
                     * 获取Reason for preview data fetch failure
                     * @return Msg Reason for preview data fetch failure
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
                     * 获取Status.
-0: Success
-10000: Parameter error. Parameter confirmation.
-10001: Authorization failure. Please confirm authorization.
-10002: Failed to get file list. Try again later. If the problem persists, consult [online support](https://andon.tencentcloud.com/online-service?from=doc_614) or [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=83&level2_id=469&source=14&data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&step=1) to fix it.
-10003: No corresponding prefix files in the bucket. Use the correct bucket, file prefix, and compression method.
-10004: File download failed. Try again later. If the problem persists, consult [online support](https://andon.tencentcloud.com/online-service?from=doc_614) or [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=83&level2_id=469&source=14&data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&step=1) to fix it.
-10005: File decompression failed. Select the correct compression method and try again.
-10006: Failed to read file content. Please confirm the file is readable.
-10007: File preview failed, try again later. If the problem persists, consult [online support](https://andon.tencentcloud.com/online-service?from=doc_614) or [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=83&level2_id=469&source=14&data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&step=1) to fix it.
                     * @return Status Status.
-0: Success
-10000: Parameter error. Parameter confirmation.
-10001: Authorization failure. Please confirm authorization.
-10002: Failed to get file list. Try again later. If the problem persists, consult [online support](https://andon.tencentcloud.com/online-service?from=doc_614) or [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=83&level2_id=469&source=14&data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&step=1) to fix it.
-10003: No corresponding prefix files in the bucket. Use the correct bucket, file prefix, and compression method.
-10004: File download failed. Try again later. If the problem persists, consult [online support](https://andon.tencentcloud.com/online-service?from=doc_614) or [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=83&level2_id=469&source=14&data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&step=1) to fix it.
-10005: File decompression failed. Select the correct compression method and try again.
-10006: Failed to read file content. Please confirm the file is readable.
-10007: File preview failed, try again later. If the problem persists, consult [online support](https://andon.tencentcloud.com/online-service?from=doc_614) or [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=83&level2_id=469&source=14&data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&step=1) to fix it.
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
                     * First few lines of data from a certain file under the matched bucket
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
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Reason for preview data fetch failure
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * Status.
-0: Success
-10000: Parameter error. Parameter confirmation.
-10001: Authorization failure. Please confirm authorization.
-10002: Failed to get file list. Try again later. If the problem persists, consult [online support](https://andon.tencentcloud.com/online-service?from=doc_614) or [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=83&level2_id=469&source=14&data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&step=1) to fix it.
-10003: No corresponding prefix files in the bucket. Use the correct bucket, file prefix, and compression method.
-10004: File download failed. Try again later. If the problem persists, consult [online support](https://andon.tencentcloud.com/online-service?from=doc_614) or [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=83&level2_id=469&source=14&data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&step=1) to fix it.
-10005: File decompression failed. Select the correct compression method and try again.
-10006: Failed to read file content. Please confirm the file is readable.
-10007: File preview failed, try again later. If the problem persists, consult [online support](https://andon.tencentcloud.com/online-service?from=doc_614) or [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=83&level2_id=469&source=14&data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&step=1) to fix it.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHCOSRECHARGEINFORESPONSE_H_
