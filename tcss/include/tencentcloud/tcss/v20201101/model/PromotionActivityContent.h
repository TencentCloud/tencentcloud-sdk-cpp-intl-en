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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_PROMOTIONACTIVITYCONTENT_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_PROMOTIONACTIVITYCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Promotion content
                */
                class PromotionActivityContent : public AbstractModel
                {
                public:
                    PromotionActivityContent();
                    ~PromotionActivityContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of months
                     * @return MonthNum Number of months
                     */
                    uint64_t GetMonthNum() const;

                    /**
                     * 设置Number of months
                     * @param MonthNum Number of months
                     */
                    void SetMonthNum(const uint64_t& _monthNum);

                    /**
                     * 判断参数 MonthNum 是否已赋值
                     * @return MonthNum 是否已赋值
                     */
                    bool MonthNumHasBeenSet() const;

                    /**
                     * 获取Minimum number of cores
                     * @return CoresCountLimit Minimum number of cores
                     */
                    uint64_t GetCoresCountLimit() const;

                    /**
                     * 设置Minimum number of cores
                     * @param CoresCountLimit Minimum number of cores
                     */
                    void SetCoresCountLimit(const uint64_t& _coresCountLimit);

                    /**
                     * 判断参数 CoresCountLimit 是否已赋值
                     * @return CoresCountLimit 是否已赋值
                     */
                    bool CoresCountLimitHasBeenSet() const;

                    /**
                     * 获取Discount on the Pro Edition
                     * @return ProfessionalDiscount Discount on the Pro Edition
                     */
                    uint64_t GetProfessionalDiscount() const;

                    /**
                     * 设置Discount on the Pro Edition
                     * @param ProfessionalDiscount Discount on the Pro Edition
                     */
                    void SetProfessionalDiscount(const uint64_t& _professionalDiscount);

                    /**
                     * 判断参数 ProfessionalDiscount 是否已赋值
                     * @return ProfessionalDiscount 是否已赋值
                     */
                    bool ProfessionalDiscountHasBeenSet() const;

                    /**
                     * 获取Number of free images
                     * @return ImageAuthorizationNum Number of free images
                     */
                    uint64_t GetImageAuthorizationNum() const;

                    /**
                     * 设置Number of free images
                     * @param ImageAuthorizationNum Number of free images
                     */
                    void SetImageAuthorizationNum(const uint64_t& _imageAuthorizationNum);

                    /**
                     * 判断参数 ImageAuthorizationNum 是否已赋值
                     * @return ImageAuthorizationNum 是否已赋值
                     */
                    bool ImageAuthorizationNumHasBeenSet() const;

                private:

                    /**
                     * Number of months
                     */
                    uint64_t m_monthNum;
                    bool m_monthNumHasBeenSet;

                    /**
                     * Minimum number of cores
                     */
                    uint64_t m_coresCountLimit;
                    bool m_coresCountLimitHasBeenSet;

                    /**
                     * Discount on the Pro Edition
                     */
                    uint64_t m_professionalDiscount;
                    bool m_professionalDiscountHasBeenSet;

                    /**
                     * Number of free images
                     */
                    uint64_t m_imageAuthorizationNum;
                    bool m_imageAuthorizationNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_PROMOTIONACTIVITYCONTENT_H_
