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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_QUOTA_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_QUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * Purge usage and quota
                */
                class Quota : public AbstractModel
                {
                public:
                    Quota();
                    ~Quota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Quota limit for one batch submission request.
                     * @return Batch Quota limit for one batch submission request.
                     * 
                     */
                    int64_t GetBatch() const;

                    /**
                     * 设置Quota limit for one batch submission request.
                     * @param _batch Quota limit for one batch submission request.
                     * 
                     */
                    void SetBatch(const int64_t& _batch);

                    /**
                     * 判断参数 Batch 是否已赋值
                     * @return Batch 是否已赋值
                     * 
                     */
                    bool BatchHasBeenSet() const;

                    /**
                     * 获取Daily submission quota limit.
                     * @return Total Daily submission quota limit.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Daily submission quota limit.
                     * @param _total Daily submission quota limit.
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Remaining daily submission quota.
                     * @return Available Remaining daily submission quota.
                     * 
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 设置Remaining daily submission quota.
                     * @param _available Remaining daily submission quota.
                     * 
                     */
                    void SetAvailable(const int64_t& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                private:

                    /**
                     * Quota limit for one batch submission request.
                     */
                    int64_t m_batch;
                    bool m_batchHasBeenSet;

                    /**
                     * Daily submission quota limit.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Remaining daily submission quota.
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_QUOTA_H_
