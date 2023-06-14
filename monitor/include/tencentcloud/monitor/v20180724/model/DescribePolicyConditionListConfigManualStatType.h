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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUALSTATTYPE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUALSTATTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyConditionList.ConfigManual.StatType
                */
                class DescribePolicyConditionListConfigManualStatType : public AbstractModel
                {
                public:
                    DescribePolicyConditionListConfigManualStatType();
                    ~DescribePolicyConditionListConfigManualStatType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data aggregation method in a period of 5 seconds.
Note: This field may return null, indicating that no valid value was found.
                     * @return P5 Data aggregation method in a period of 5 seconds.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetP5() const;

                    /**
                     * 设置Data aggregation method in a period of 5 seconds.
Note: This field may return null, indicating that no valid value was found.
                     * @param _p5 Data aggregation method in a period of 5 seconds.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetP5(const std::string& _p5);

                    /**
                     * 判断参数 P5 是否已赋值
                     * @return P5 是否已赋值
                     * 
                     */
                    bool P5HasBeenSet() const;

                    /**
                     * 获取Data aggregation method in a period of 10 seconds.
Note: This field may return null, indicating that no valid value was found.
                     * @return P10 Data aggregation method in a period of 10 seconds.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetP10() const;

                    /**
                     * 设置Data aggregation method in a period of 10 seconds.
Note: This field may return null, indicating that no valid value was found.
                     * @param _p10 Data aggregation method in a period of 10 seconds.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetP10(const std::string& _p10);

                    /**
                     * 判断参数 P10 是否已赋值
                     * @return P10 是否已赋值
                     * 
                     */
                    bool P10HasBeenSet() const;

                    /**
                     * 获取Data aggregation method in a period of 1 minute.
Note: This field may return null, indicating that no valid value was found.
                     * @return P60 Data aggregation method in a period of 1 minute.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetP60() const;

                    /**
                     * 设置Data aggregation method in a period of 1 minute.
Note: This field may return null, indicating that no valid value was found.
                     * @param _p60 Data aggregation method in a period of 1 minute.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetP60(const std::string& _p60);

                    /**
                     * 判断参数 P60 是否已赋值
                     * @return P60 是否已赋值
                     * 
                     */
                    bool P60HasBeenSet() const;

                    /**
                     * 获取Data aggregation method in a period of 5 minutes.
Note: This field may return null, indicating that no valid value was found.
                     * @return P300 Data aggregation method in a period of 5 minutes.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetP300() const;

                    /**
                     * 设置Data aggregation method in a period of 5 minutes.
Note: This field may return null, indicating that no valid value was found.
                     * @param _p300 Data aggregation method in a period of 5 minutes.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetP300(const std::string& _p300);

                    /**
                     * 判断参数 P300 是否已赋值
                     * @return P300 是否已赋值
                     * 
                     */
                    bool P300HasBeenSet() const;

                    /**
                     * 获取Data aggregation method in a period of 10 minutes.
Note: This field may return null, indicating that no valid value was found.
                     * @return P600 Data aggregation method in a period of 10 minutes.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetP600() const;

                    /**
                     * 设置Data aggregation method in a period of 10 minutes.
Note: This field may return null, indicating that no valid value was found.
                     * @param _p600 Data aggregation method in a period of 10 minutes.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetP600(const std::string& _p600);

                    /**
                     * 判断参数 P600 是否已赋值
                     * @return P600 是否已赋值
                     * 
                     */
                    bool P600HasBeenSet() const;

                    /**
                     * 获取Data aggregation method in a period of 30 minutes.
Note: This field may return null, indicating that no valid value was found.
                     * @return P1800 Data aggregation method in a period of 30 minutes.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetP1800() const;

                    /**
                     * 设置Data aggregation method in a period of 30 minutes.
Note: This field may return null, indicating that no valid value was found.
                     * @param _p1800 Data aggregation method in a period of 30 minutes.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetP1800(const std::string& _p1800);

                    /**
                     * 判断参数 P1800 是否已赋值
                     * @return P1800 是否已赋值
                     * 
                     */
                    bool P1800HasBeenSet() const;

                    /**
                     * 获取Data aggregation method in a period of 1 hour.
Note: This field may return null, indicating that no valid value was found.
                     * @return P3600 Data aggregation method in a period of 1 hour.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetP3600() const;

                    /**
                     * 设置Data aggregation method in a period of 1 hour.
Note: This field may return null, indicating that no valid value was found.
                     * @param _p3600 Data aggregation method in a period of 1 hour.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetP3600(const std::string& _p3600);

                    /**
                     * 判断参数 P3600 是否已赋值
                     * @return P3600 是否已赋值
                     * 
                     */
                    bool P3600HasBeenSet() const;

                    /**
                     * 获取Data aggregation method in a period of 1 day.
Note: This field may return null, indicating that no valid value was found.
                     * @return P86400 Data aggregation method in a period of 1 day.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetP86400() const;

                    /**
                     * 设置Data aggregation method in a period of 1 day.
Note: This field may return null, indicating that no valid value was found.
                     * @param _p86400 Data aggregation method in a period of 1 day.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetP86400(const std::string& _p86400);

                    /**
                     * 判断参数 P86400 是否已赋值
                     * @return P86400 是否已赋值
                     * 
                     */
                    bool P86400HasBeenSet() const;

                private:

                    /**
                     * Data aggregation method in a period of 5 seconds.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_p5;
                    bool m_p5HasBeenSet;

                    /**
                     * Data aggregation method in a period of 10 seconds.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_p10;
                    bool m_p10HasBeenSet;

                    /**
                     * Data aggregation method in a period of 1 minute.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_p60;
                    bool m_p60HasBeenSet;

                    /**
                     * Data aggregation method in a period of 5 minutes.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_p300;
                    bool m_p300HasBeenSet;

                    /**
                     * Data aggregation method in a period of 10 minutes.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_p600;
                    bool m_p600HasBeenSet;

                    /**
                     * Data aggregation method in a period of 30 minutes.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_p1800;
                    bool m_p1800HasBeenSet;

                    /**
                     * Data aggregation method in a period of 1 hour.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_p3600;
                    bool m_p3600HasBeenSet;

                    /**
                     * Data aggregation method in a period of 1 day.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_p86400;
                    bool m_p86400HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUALSTATTYPE_H_
