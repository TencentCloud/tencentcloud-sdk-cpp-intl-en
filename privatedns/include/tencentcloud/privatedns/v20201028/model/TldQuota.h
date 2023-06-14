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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_TLDQUOTA_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_TLDQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * TLD quota
                */
                class TldQuota : public AbstractModel
                {
                public:
                    TldQuota();
                    ~TldQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total quota
                     * @return Total Total quota
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Total quota
                     * @param _total Total quota
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
                     * 获取Used quota
                     * @return Used Used quota
                     * 
                     */
                    int64_t GetUsed() const;

                    /**
                     * 设置Used quota
                     * @param _used Used quota
                     * 
                     */
                    void SetUsed(const int64_t& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                    /**
                     * 获取Available quota
                     * @return Stock Available quota
                     * 
                     */
                    int64_t GetStock() const;

                    /**
                     * 设置Available quota
                     * @param _stock Available quota
                     * 
                     */
                    void SetStock(const int64_t& _stock);

                    /**
                     * 判断参数 Stock 是否已赋值
                     * @return Stock 是否已赋值
                     * 
                     */
                    bool StockHasBeenSet() const;

                    /**
                     * 获取User’s quota
                     * @return Quota User’s quota
                     * 
                     */
                    int64_t GetQuota() const;

                    /**
                     * 设置User’s quota
                     * @param _quota User’s quota
                     * 
                     */
                    void SetQuota(const int64_t& _quota);

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     * 
                     */
                    bool QuotaHasBeenSet() const;

                private:

                    /**
                     * Total quota
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Used quota
                     */
                    int64_t m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * Available quota
                     */
                    int64_t m_stock;
                    bool m_stockHasBeenSet;

                    /**
                     * User’s quota
                     */
                    int64_t m_quota;
                    bool m_quotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_TLDQUOTA_H_
