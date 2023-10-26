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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDOWNLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillDownloadUrl request structure.
                */
                class DescribeBillDownloadUrlRequest : public AbstractModel
                {
                public:
                    DescribeBillDownloadUrlRequest();
                    ~DescribeBillDownloadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Bill type. Valid values:
`billOverview` (L0: PDF bills)
`billSummary` (L1: Bill summary)	
`billResource` (L2: Bill by instance)	
`billDetail` (L3: Bill details)	
`billPack` (Bill packs)
                     * @return FileType Bill type. Valid values:
`billOverview` (L0: PDF bills)
`billSummary` (L1: Bill summary)	
`billResource` (L2: Bill by instance)	
`billDetail` (L3: Bill details)	
`billPack` (Bill packs)
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Bill type. Valid values:
`billOverview` (L0: PDF bills)
`billSummary` (L1: Bill summary)	
`billResource` (L2: Bill by instance)	
`billDetail` (L3: Bill details)	
`billPack` (Bill packs)
                     * @param _fileType Bill type. Valid values:
`billOverview` (L0: PDF bills)
`billSummary` (L1: Bill summary)	
`billResource` (L2: Bill by instance)	
`billDetail` (L3: Bill details)	
`billPack` (Bill packs)
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取Bill month.
The earliest month that can be queried is January 2021.
L0 bills and bill packs cannot be downloaded for the current month. Please download the current month's bills after it is generated at 19:00 on the 1st day of the next month.
                     * @return Month Bill month.
The earliest month that can be queried is January 2021.
L0 bills and bill packs cannot be downloaded for the current month. Please download the current month's bills after it is generated at 19:00 on the 1st day of the next month.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Bill month.
The earliest month that can be queried is January 2021.
L0 bills and bill packs cannot be downloaded for the current month. Please download the current month's bills after it is generated at 19:00 on the 1st day of the next month.
                     * @param _month Bill month.
The earliest month that can be queried is January 2021.
L0 bills and bill packs cannot be downloaded for the current month. Please download the current month's bills after it is generated at 19:00 on the 1st day of the next month.
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取List of account IDs for downloading the bill. By default, it queries the bill for the current account. If you are an admin account and need to download bills for member accounts with their own payment, input the member account's UIN for this parameter.
                     * @return ChildUin List of account IDs for downloading the bill. By default, it queries the bill for the current account. If you are an admin account and need to download bills for member accounts with their own payment, input the member account's UIN for this parameter.
                     * 
                     */
                    std::vector<std::string> GetChildUin() const;

                    /**
                     * 设置List of account IDs for downloading the bill. By default, it queries the bill for the current account. If you are an admin account and need to download bills for member accounts with their own payment, input the member account's UIN for this parameter.
                     * @param _childUin List of account IDs for downloading the bill. By default, it queries the bill for the current account. If you are an admin account and need to download bills for member accounts with their own payment, input the member account's UIN for this parameter.
                     * 
                     */
                    void SetChildUin(const std::vector<std::string>& _childUin);

                    /**
                     * 判断参数 ChildUin 是否已赋值
                     * @return ChildUin 是否已赋值
                     * 
                     */
                    bool ChildUinHasBeenSet() const;

                private:

                    /**
                     * Bill type. Valid values:
`billOverview` (L0: PDF bills)
`billSummary` (L1: Bill summary)	
`billResource` (L2: Bill by instance)	
`billDetail` (L3: Bill details)	
`billPack` (Bill packs)
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Bill month.
The earliest month that can be queried is January 2021.
L0 bills and bill packs cannot be downloaded for the current month. Please download the current month's bills after it is generated at 19:00 on the 1st day of the next month.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * List of account IDs for downloading the bill. By default, it queries the bill for the current account. If you are an admin account and need to download bills for member accounts with their own payment, input the member account's UIN for this parameter.
                     */
                    std::vector<std::string> m_childUin;
                    bool m_childUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDOWNLOADURLREQUEST_H_
