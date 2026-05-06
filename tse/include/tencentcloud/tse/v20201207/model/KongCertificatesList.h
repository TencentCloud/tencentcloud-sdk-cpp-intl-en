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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGCERTIFICATESLIST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGCERTIFICATESLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongCertificatesPreview.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Certificate list of the kong instance
                */
                class KongCertificatesList : public AbstractModel
                {
                public:
                    KongCertificatesList();
                    ~KongCertificatesList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total Quantity of Certificate Lists
                     * @return Total Total Quantity of Certificate Lists
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Total Quantity of Certificate Lists
                     * @param _total Total Quantity of Certificate Lists
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
                     * 获取None.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CertificatesList None.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KongCertificatesPreview> GetCertificatesList() const;

                    /**
                     * 设置None.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _certificatesList None.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertificatesList(const std::vector<KongCertificatesPreview>& _certificatesList);

                    /**
                     * 判断参数 CertificatesList 是否已赋值
                     * @return CertificatesList 是否已赋值
                     * 
                     */
                    bool CertificatesListHasBeenSet() const;

                    /**
                     * 获取Total number of pages in the certificate list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Pages Total number of pages in the certificate list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    int64_t GetPages() const;

                    /**
                     * 设置Total number of pages in the certificate list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pages Total number of pages in the certificate list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetPages(const int64_t& _pages);

                    /**
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     * @deprecated
                     */
                    bool PagesHasBeenSet() const;

                private:

                    /**
                     * Total Quantity of Certificate Lists
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * None.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<KongCertificatesPreview> m_certificatesList;
                    bool m_certificatesListHasBeenSet;

                    /**
                     * Total number of pages in the certificate list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pages;
                    bool m_pagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGCERTIFICATESLIST_H_
