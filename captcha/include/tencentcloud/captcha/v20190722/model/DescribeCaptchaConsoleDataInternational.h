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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHACONSOLEDATAINTERNATIONAL_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHACONSOLEDATAINTERNATIONAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaConsoleSubDataInternational.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Paging query data result obj international
                */
                class DescribeCaptchaConsoleDataInternational : public AbstractModel
                {
                public:
                    DescribeCaptchaConsoleDataInternational();
                    ~DescribeCaptchaConsoleDataInternational() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Paginated data array.</p>
                     * @return DataList <p>Paginated data array.</p>
                     * 
                     */
                    std::vector<DescribeCaptchaConsoleSubDataInternational> GetDataList() const;

                    /**
                     * 设置<p>Paginated data array.</p>
                     * @param _dataList <p>Paginated data array.</p>
                     * 
                     */
                    void SetDataList(const std::vector<DescribeCaptchaConsoleSubDataInternational>& _dataList);

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                    /**
                     * 获取<p>Total pages</p>
                     * @return Total <p>Total pages</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置<p>Total pages</p>
                     * @param _total <p>Total pages</p>
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
                     * 获取<p>Current page</p>
                     * @return PageIndex <p>Current page</p>
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置<p>Current page</p>
                     * @param _pageIndex <p>Current page</p>
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
                     * <p>Paginated data array.</p>
                     */
                    std::vector<DescribeCaptchaConsoleSubDataInternational> m_dataList;
                    bool m_dataListHasBeenSet;

                    /**
                     * <p>Total pages</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>Current page</p>
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHACONSOLEDATAINTERNATIONAL_H_
