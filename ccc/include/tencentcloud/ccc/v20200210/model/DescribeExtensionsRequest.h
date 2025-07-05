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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEEXTENSIONSREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEEXTENSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeExtensions request structure.
                */
                class DescribeExtensionsRequest : public AbstractModel
                {
                public:
                    DescribeExtensionsRequest();
                    ~DescribeExtensionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Page number (starting from 0).
                     * @return PageNumber Page number (starting from 0).
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number (starting from 0).
                     * @param _pageNumber Page number (starting from 0).
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Filtering extension number list.
                     * @return ExtensionIds Filtering extension number list.
                     * 
                     */
                    std::vector<std::string> GetExtensionIds() const;

                    /**
                     * 设置Filtering extension number list.
                     * @param _extensionIds Filtering extension number list.
                     * 
                     */
                    void SetExtensionIds(const std::vector<std::string>& _extensionIds);

                    /**
                     * 判断参数 ExtensionIds 是否已赋值
                     * @return ExtensionIds 是否已赋值
                     * 
                     */
                    bool ExtensionIdsHasBeenSet() const;

                    /**
                     * 获取Page size.
                     * @return PageSize Page size.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size.
                     * @param _pageSize Page size.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Fuzzy query field (fuzzy query for extension number, extension name, agent email, and agent name).
                     * @return FuzzingKeyWord Fuzzy query field (fuzzy query for extension number, extension name, agent email, and agent name).
                     * 
                     */
                    std::string GetFuzzingKeyWord() const;

                    /**
                     * 设置Fuzzy query field (fuzzy query for extension number, extension name, agent email, and agent name).
                     * @param _fuzzingKeyWord Fuzzy query field (fuzzy query for extension number, extension name, agent email, and agent name).
                     * 
                     */
                    void SetFuzzingKeyWord(const std::string& _fuzzingKeyWord);

                    /**
                     * 判断参数 FuzzingKeyWord 是否已赋值
                     * @return FuzzingKeyWord 是否已赋值
                     * 
                     */
                    bool FuzzingKeyWordHasBeenSet() const;

                    /**
                     * 获取Whether to return the current status of the telephone or not.
                     * @return IsNeedStatus Whether to return the current status of the telephone or not.
                     * 
                     */
                    bool GetIsNeedStatus() const;

                    /**
                     * 设置Whether to return the current status of the telephone or not.
                     * @param _isNeedStatus Whether to return the current status of the telephone or not.
                     * 
                     */
                    void SetIsNeedStatus(const bool& _isNeedStatus);

                    /**
                     * 判断参数 IsNeedStatus 是否已赋值
                     * @return IsNeedStatus 是否已赋值
                     * 
                     */
                    bool IsNeedStatusHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Page number (starting from 0).
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Filtering extension number list.
                     */
                    std::vector<std::string> m_extensionIds;
                    bool m_extensionIdsHasBeenSet;

                    /**
                     * Page size.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Fuzzy query field (fuzzy query for extension number, extension name, agent email, and agent name).
                     */
                    std::string m_fuzzingKeyWord;
                    bool m_fuzzingKeyWordHasBeenSet;

                    /**
                     * Whether to return the current status of the telephone or not.
                     */
                    bool m_isNeedStatus;
                    bool m_isNeedStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEEXTENSIONSREQUEST_H_
