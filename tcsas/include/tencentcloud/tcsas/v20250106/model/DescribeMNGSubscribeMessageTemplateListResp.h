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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSUBSCRIBEMESSAGETEMPLATELISTRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSUBSCRIBEMESSAGETEMPLATELISTRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGSubscribeMessageTemplateInfoResp.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Mini game subscription message template list
                */
                class DescribeMNGSubscribeMessageTemplateListResp : public AbstractModel
                {
                public:
                    DescribeMNGSubscribeMessageTemplateListResp();
                    ~DescribeMNGSubscribeMessageTemplateListResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Total count.</p>
                     * @return TotalCount <p>Total count.</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>Total count.</p>
                     * @param _totalCount <p>Total count.</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Subscription message template data.</p>
                     * @return DataList <p>Subscription message template data.</p>
                     * 
                     */
                    std::vector<DescribeMNGSubscribeMessageTemplateInfoResp> GetDataList() const;

                    /**
                     * 设置<p>Subscription message template data.</p>
                     * @param _dataList <p>Subscription message template data.</p>
                     * 
                     */
                    void SetDataList(const std::vector<DescribeMNGSubscribeMessageTemplateInfoResp>& _dataList);

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                private:

                    /**
                     * <p>Total count.</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Subscription message template data.</p>
                     */
                    std::vector<DescribeMNGSubscribeMessageTemplateInfoResp> m_dataList;
                    bool m_dataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSUBSCRIBEMESSAGETEMPLATELISTRESP_H_
