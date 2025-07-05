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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLDOWNLOADURLREQUEST_H_

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
                * DescribeBillDownloadUrl request structure.
                */
                class DescribeBillDownloadUrlRequest : public AbstractModel
                {
                public:
                    DescribeBillDownloadUrlRequest();
                    ~DescribeBillDownloadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The month to which the bill belongs, formatted as YYYY-MM; the earliest month available for query is June, 2022. Current month's billing data may be inaccurate; please download the current month's bill after it is generated at 1:00 on the 5th of the next month.
                     * @return Month The month to which the bill belongs, formatted as YYYY-MM; the earliest month available for query is June, 2022. Current month's billing data may be inaccurate; please download the current month's bill after it is generated at 1:00 on the 5th of the next month.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置The month to which the bill belongs, formatted as YYYY-MM; the earliest month available for query is June, 2022. Current month's billing data may be inaccurate; please download the current month's bill after it is generated at 1:00 on the 5th of the next month.
                     * @param _month The month to which the bill belongs, formatted as YYYY-MM; the earliest month available for query is June, 2022. Current month's billing data may be inaccurate; please download the current month's bill after it is generated at 1:00 on the 5th of the next month.
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
                     * 获取Type of bill. Valid values: L2 or L3
                     * @return FileType Type of bill. Valid values: L2 or L3
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Type of bill. Valid values: L2 or L3
                     * @param _fileType Type of bill. Valid values: L2 or L3
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                private:

                    /**
                     * The month to which the bill belongs, formatted as YYYY-MM; the earliest month available for query is June, 2022. Current month's billing data may be inaccurate; please download the current month's bill after it is generated at 1:00 on the 5th of the next month.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Type of bill. Valid values: L2 or L3
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLDOWNLOADURLREQUEST_H_
