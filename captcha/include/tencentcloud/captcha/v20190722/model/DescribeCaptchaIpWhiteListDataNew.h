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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAIPWHITELISTDATANEW_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAIPWHITELISTDATANEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaWhiteListItem.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Ip allowlist paging query data result
                */
                class DescribeCaptchaIpWhiteListDataNew : public AbstractModel
                {
                public:
                    DescribeCaptchaIpWhiteListDataNew();
                    ~DescribeCaptchaIpWhiteListDataNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Data list.</p>
                     * @return DataList <p>Data list.</p>
                     * 
                     */
                    std::vector<DescribeCaptchaWhiteListItem> GetDataList() const;

                    /**
                     * 设置<p>Data list.</p>
                     * @param _dataList <p>Data list.</p>
                     * 
                     */
                    void SetDataList(const std::vector<DescribeCaptchaWhiteListItem>& _dataList);

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                    /**
                     * 获取<p>Total number of records</p>
                     * @return Total <p>Total number of records</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置<p>Total number of records</p>
                     * @param _total <p>Total number of records</p>
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
                     * 获取<p>Page number.</p>
                     * @return PageIndex <p>Page number.</p>
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置<p>Page number.</p>
                     * @param _pageIndex <p>Page number.</p>
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                private:

                    /**
                     * <p>Data list.</p>
                     */
                    std::vector<DescribeCaptchaWhiteListItem> m_dataList;
                    bool m_dataListHasBeenSet;

                    /**
                     * <p>Total number of records</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>Page number.</p>
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAIPWHITELISTDATANEW_H_
