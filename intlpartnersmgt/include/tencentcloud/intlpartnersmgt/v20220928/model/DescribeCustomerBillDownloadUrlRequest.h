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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERBILLDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERBILLDOWNLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * DescribeCustomerBillDownloadUrl request structure.
                */
                class DescribeCustomerBillDownloadUrlRequest : public AbstractModel
                {
                public:
                    DescribeCustomerBillDownloadUrlRequest();
                    ~DescribeCustomerBillDownloadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The month to which the bill belongs, formatted as yyyy-mm; the earliest month available for query is june, 2022. current month's billing data may be inaccurate; please download the current month's bill after it is generated at 1:00 on the 5th of the next month.
                     * @return Month The month to which the bill belongs, formatted as yyyy-mm; the earliest month available for query is june, 2022. current month's billing data may be inaccurate; please download the current month's bill after it is generated at 1:00 on the 5th of the next month.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置The month to which the bill belongs, formatted as yyyy-mm; the earliest month available for query is june, 2022. current month's billing data may be inaccurate; please download the current month's bill after it is generated at 1:00 on the 5th of the next month.
                     * @param _month The month to which the bill belongs, formatted as yyyy-mm; the earliest month available for query is june, 2022. current month's billing data may be inaccurate; please download the current month's bill after it is generated at 1:00 on the 5th of the next month.
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
                     * 获取Bill type. valid values: [billResource, billDetail, billResourcePack, billDetailPack]. `billResource`: resource bill; `billDetail`: detailed bill; `billResourcePack`: resource bill package; `billDetailPack`: detailed bill package.
                     * @return FileType Bill type. valid values: [billResource, billDetail, billResourcePack, billDetailPack]. `billResource`: resource bill; `billDetail`: detailed bill; `billResourcePack`: resource bill package; `billDetailPack`: detailed bill package.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Bill type. valid values: [billResource, billDetail, billResourcePack, billDetailPack]. `billResource`: resource bill; `billDetail`: detailed bill; `billResourcePack`: resource bill package; `billDetailPack`: detailed bill package.
                     * @param _fileType Bill type. valid values: [billResource, billDetail, billResourcePack, billDetailPack]. `billResource`: resource bill; `billDetail`: detailed bill; `billResourcePack`: resource bill package; `billDetailPack`: detailed bill package.
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
                     * 获取Customer type. valid values: [Customer, Reseller, ResellerCustomer]. `Customer`: direct customer; `Reseller`: secondary reseller; `ResellerCustomer`: reseller's customers
                     * @return CustomerUinType Customer type. valid values: [Customer, Reseller, ResellerCustomer]. `Customer`: direct customer; `Reseller`: secondary reseller; `ResellerCustomer`: reseller's customers
                     * 
                     */
                    std::string GetCustomerUinType() const;

                    /**
                     * 设置Customer type. valid values: [Customer, Reseller, ResellerCustomer]. `Customer`: direct customer; `Reseller`: secondary reseller; `ResellerCustomer`: reseller's customers
                     * @param _customerUinType Customer type. valid values: [Customer, Reseller, ResellerCustomer]. `Customer`: direct customer; `Reseller`: secondary reseller; `ResellerCustomer`: reseller's customers
                     * 
                     */
                    void SetCustomerUinType(const std::string& _customerUinType);

                    /**
                     * 判断参数 CustomerUinType 是否已赋值
                     * @return CustomerUinType 是否已赋值
                     * 
                     */
                    bool CustomerUinTypeHasBeenSet() const;

                    /**
                     * 获取Language. valid values: [zh_cn, en]. default is `en` (english).
                     * @return FileLanguage Language. valid values: [zh_cn, en]. default is `en` (english).
                     * 
                     */
                    std::string GetFileLanguage() const;

                    /**
                     * 设置Language. valid values: [zh_cn, en]. default is `en` (english).
                     * @param _fileLanguage Language. valid values: [zh_cn, en]. default is `en` (english).
                     * 
                     */
                    void SetFileLanguage(const std::string& _fileLanguage);

                    /**
                     * 判断参数 FileLanguage 是否已赋值
                     * @return FileLanguage 是否已赋值
                     * 
                     */
                    bool FileLanguageHasBeenSet() const;

                    /**
                     * 获取Customer uin. when downloading the bill package (FileType is billResourcePack or billDetailPack), CustomerUin is not passed
                     * @return CustomerUin Customer uin. when downloading the bill package (FileType is billResourcePack or billDetailPack), CustomerUin is not passed
                     * 
                     */
                    int64_t GetCustomerUin() const;

                    /**
                     * 设置Customer uin. when downloading the bill package (FileType is billResourcePack or billDetailPack), CustomerUin is not passed
                     * @param _customerUin Customer uin. when downloading the bill package (FileType is billResourcePack or billDetailPack), CustomerUin is not passed
                     * 
                     */
                    void SetCustomerUin(const int64_t& _customerUin);

                    /**
                     * 判断参数 CustomerUin 是否已赋值
                     * @return CustomerUin 是否已赋值
                     * 
                     */
                    bool CustomerUinHasBeenSet() const;

                private:

                    /**
                     * The month to which the bill belongs, formatted as yyyy-mm; the earliest month available for query is june, 2022. current month's billing data may be inaccurate; please download the current month's bill after it is generated at 1:00 on the 5th of the next month.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Bill type. valid values: [billResource, billDetail, billResourcePack, billDetailPack]. `billResource`: resource bill; `billDetail`: detailed bill; `billResourcePack`: resource bill package; `billDetailPack`: detailed bill package.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Customer type. valid values: [Customer, Reseller, ResellerCustomer]. `Customer`: direct customer; `Reseller`: secondary reseller; `ResellerCustomer`: reseller's customers
                     */
                    std::string m_customerUinType;
                    bool m_customerUinTypeHasBeenSet;

                    /**
                     * Language. valid values: [zh_cn, en]. default is `en` (english).
                     */
                    std::string m_fileLanguage;
                    bool m_fileLanguageHasBeenSet;

                    /**
                     * Customer uin. when downloading the bill package (FileType is billResourcePack or billDetailPack), CustomerUin is not passed
                     */
                    int64_t m_customerUin;
                    bool m_customerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERBILLDOWNLOADURLREQUEST_H_
