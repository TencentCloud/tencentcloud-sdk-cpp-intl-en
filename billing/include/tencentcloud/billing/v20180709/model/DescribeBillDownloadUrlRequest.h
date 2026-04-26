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
                     * 获取Billing mode. Enumeration values
billOverview=L0-PDF Bill
Bill Summary=L1-Summary Bill	
billResource=L2-Resource bill	
billDetail=L3-Detailed Bill	
billPack
                     * @return FileType Billing mode. Enumeration values
billOverview=L0-PDF Bill
Bill Summary=L1-Summary Bill	
billResource=L2-Resource bill	
billDetail=L3-Detailed Bill	
billPack
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Billing mode. Enumeration values
billOverview=L0-PDF Bill
Bill Summary=L1-Summary Bill	
billResource=L2-Resource bill	
billDetail=L3-Detailed Bill	
billPack
                     * @param _fileType Billing mode. Enumeration values
billOverview=L0-PDF Bill
Bill Summary=L1-Summary Bill	
billResource=L2-Resource bill	
billDetail=L3-Detailed Bill	
billPack
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
                     * 获取Billing month
Earliest start month supported is 2021-01
L0-PDF&bill package does not support download for the current month. Please download the monthly bill after billing on the 1st of next month at 19:00.
                     * @return Month Billing month
Earliest start month supported is 2021-01
L0-PDF&bill package does not support download for the current month. Please download the monthly bill after billing on the 1st of next month at 19:00.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Billing month
Earliest start month supported is 2021-01
L0-PDF&bill package does not support download for the current month. Please download the monthly bill after billing on the 1st of next month at 19:00.
                     * @param _month Billing month
Earliest start month supported is 2021-01
L0-PDF&bill package does not support download for the current month. Please download the monthly bill after billing on the 1st of next month at 19:00.
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
                     * 获取Downloaded account ID list. By default, the query returns the account statement of the current account. If the group management account needs to download the self-pay bills of member accounts, enter the member account UIN in this field.
                     * @return ChildUin Downloaded account ID list. By default, the query returns the account statement of the current account. If the group management account needs to download the self-pay bills of member accounts, enter the member account UIN in this field.
                     * 
                     */
                    std::vector<std::string> GetChildUin() const;

                    /**
                     * 设置Downloaded account ID list. By default, the query returns the account statement of the current account. If the group management account needs to download the self-pay bills of member accounts, enter the member account UIN in this field.
                     * @param _childUin Downloaded account ID list. By default, the query returns the account statement of the current account. If the group management account needs to download the self-pay bills of member accounts, enter the member account UIN in this field.
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
                     * Billing mode. Enumeration values
billOverview=L0-PDF Bill
Bill Summary=L1-Summary Bill	
billResource=L2-Resource bill	
billDetail=L3-Detailed Bill	
billPack
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Billing month
Earliest start month supported is 2021-01
L0-PDF&bill package does not support download for the current month. Please download the monthly bill after billing on the 1st of next month at 19:00.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Downloaded account ID list. By default, the query returns the account statement of the current account. If the group management account needs to download the self-pay bills of member accounts, enter the member account UIN in this field.
                     */
                    std::vector<std::string> m_childUin;
                    bool m_childUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDOWNLOADURLREQUEST_H_
