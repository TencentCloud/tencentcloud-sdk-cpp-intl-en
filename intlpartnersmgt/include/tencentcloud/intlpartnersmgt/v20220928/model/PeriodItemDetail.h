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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_PERIODITEMDETAIL_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_PERIODITEMDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Cost cycle entry info
                */
                class PeriodItemDetail : public AbstractModel
                {
                public:
                    PeriodItemDetail();
                    ~PeriodItemDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Date</p>
                     * @return Period <p>Date</p>
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置<p>Date</p>
                     * @param _period <p>Date</p>
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>Fee</p>
                     * @return Cost <p>Fee</p>
                     * 
                     */
                    std::string GetCost() const;

                    /**
                     * 设置<p>Fee</p>
                     * @param _cost <p>Fee</p>
                     * 
                     */
                    void SetCost(const std::string& _cost);

                    /**
                     * 判断参数 Cost 是否已赋值
                     * @return Cost 是否已赋值
                     * 
                     */
                    bool CostHasBeenSet() const;

                private:

                    /**
                     * <p>Date</p>
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>Fee</p>
                     */
                    std::string m_cost;
                    bool m_costHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_PERIODITEMDETAIL_H_
