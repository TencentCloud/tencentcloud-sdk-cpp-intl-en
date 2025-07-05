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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPARAMTEMPLATEINFORESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPARAMTEMPLATEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/ParameterDetail.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeParamTemplateInfo response structure.
                */
                class DescribeParamTemplateInfoResponse : public AbstractModel
                {
                public:
                    DescribeParamTemplateInfoResponse();
                    ~DescribeParamTemplateInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Quantity of parameters in the parameter template
                     * @return TotalCount Quantity of parameters in the parameter template
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Parameter template ID.
                     * @return TemplateId Parameter template ID.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Parameter template name.
                     * @return Name Parameter template name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Product type.
- 2: Redis 2.8 Memory Edition (standard architecture).
- 3: CKV 3.2 Memory Edition (standard architecture).
- 4: CKV 3.2 Memory Edition (cluster architecture).
- 5: Redis 2.8 Memory Edition (stand-alone).
- 6: Redis 4.0 Memory Edition (standard architecture).
- 7: Redis 4.0 Memory Edition (cluster architecture).
- 8: Redis 5.0 Memory Edition (standard architecture).
- 9: Redis 5.0 Memory Edition (cluster architecture).
- 15: Redis 6.2 Memory Edition (standard architecture).
- 16: Redis 6.2 Memory Edition (cluster architecture).
- 17: Redis 7.0 Memory Edition (standard architecture).
- 18: Redis 7.0 Memory Edition (cluster architecture).
                     * @return ProductType Product type.
- 2: Redis 2.8 Memory Edition (standard architecture).
- 3: CKV 3.2 Memory Edition (standard architecture).
- 4: CKV 3.2 Memory Edition (cluster architecture).
- 5: Redis 2.8 Memory Edition (stand-alone).
- 6: Redis 4.0 Memory Edition (standard architecture).
- 7: Redis 4.0 Memory Edition (cluster architecture).
- 8: Redis 5.0 Memory Edition (standard architecture).
- 9: Redis 5.0 Memory Edition (cluster architecture).
- 15: Redis 6.2 Memory Edition (standard architecture).
- 16: Redis 6.2 Memory Edition (cluster architecture).
- 17: Redis 7.0 Memory Edition (standard architecture).
- 18: Redis 7.0 Memory Edition (cluster architecture).
                     * 
                     */
                    uint64_t GetProductType() const;

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取Parameter template description
                     * @return Description Parameter template description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Parameter details, including parameter name, current value, default value, maximum value, minimum value, enumeration value and other information.
                     * @return Items Parameter details, including parameter name, current value, default value, maximum value, minimum value, enumeration value and other information.
                     * 
                     */
                    std::vector<ParameterDetail> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * Quantity of parameters in the parameter template
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Parameter template ID.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Parameter template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Product type.
- 2: Redis 2.8 Memory Edition (standard architecture).
- 3: CKV 3.2 Memory Edition (standard architecture).
- 4: CKV 3.2 Memory Edition (cluster architecture).
- 5: Redis 2.8 Memory Edition (stand-alone).
- 6: Redis 4.0 Memory Edition (standard architecture).
- 7: Redis 4.0 Memory Edition (cluster architecture).
- 8: Redis 5.0 Memory Edition (standard architecture).
- 9: Redis 5.0 Memory Edition (cluster architecture).
- 15: Redis 6.2 Memory Edition (standard architecture).
- 16: Redis 6.2 Memory Edition (cluster architecture).
- 17: Redis 7.0 Memory Edition (standard architecture).
- 18: Redis 7.0 Memory Edition (cluster architecture).
                     */
                    uint64_t m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * Parameter template description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Parameter details, including parameter name, current value, default value, maximum value, minimum value, enumeration value and other information.
                     */
                    std::vector<ParameterDetail> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPARAMTEMPLATEINFORESPONSE_H_
