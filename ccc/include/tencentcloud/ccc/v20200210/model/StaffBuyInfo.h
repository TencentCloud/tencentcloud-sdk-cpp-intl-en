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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_STAFFBUYINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_STAFFBUYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Agent purchase information
                */
                class StaffBuyInfo : public AbstractModel
                {
                public:
                    StaffBuyInfo();
                    ~StaffBuyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of agents purchased
                     * @return Num Number of agents purchased
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置Number of agents purchased
                     * @param _num Number of agents purchased
                     * 
                     */
                    void SetNum(const int64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取Purchased timestamp.
                     * @return BuyTime Purchased timestamp.
                     * 
                     */
                    int64_t GetBuyTime() const;

                    /**
                     * 设置Purchased timestamp.
                     * @param _buyTime Purchased timestamp.
                     * 
                     */
                    void SetBuyTime(const int64_t& _buyTime);

                    /**
                     * 判断参数 BuyTime 是否已赋值
                     * @return BuyTime 是否已赋值
                     * 
                     */
                    bool BuyTimeHasBeenSet() const;

                    /**
                     * 获取End timestamp.
                     * @return EndTime End timestamp.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End timestamp.
                     * @param _endTime End timestamp.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Number of office telephones purchased.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SipNum Number of office telephones purchased.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSipNum() const;

                    /**
                     * 设置Number of office telephones purchased.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sipNum Number of office telephones purchased.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSipNum(const int64_t& _sipNum);

                    /**
                     * 判断参数 SipNum 是否已赋值
                     * @return SipNum 是否已赋值
                     * 
                     */
                    bool SipNumHasBeenSet() const;

                private:

                    /**
                     * Number of agents purchased
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * Purchased timestamp.
                     */
                    int64_t m_buyTime;
                    bool m_buyTimeHasBeenSet;

                    /**
                     * End timestamp.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Number of office telephones purchased.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sipNum;
                    bool m_sipNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_STAFFBUYINFO_H_
