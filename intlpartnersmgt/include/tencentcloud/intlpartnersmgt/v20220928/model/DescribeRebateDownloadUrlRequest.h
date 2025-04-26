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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEREBATEDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEREBATEDOWNLOADURLREQUEST_H_

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
                * DescribeRebateDownloadUrl request structure.
                */
                class DescribeRebateDownloadUrlRequest : public AbstractModel
                {
                public:
                    DescribeRebateDownloadUrlRequest();
                    ~DescribeRebateDownloadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Month of the commission bill. Format: YYYY-MM.
                     * @return Month Month of the commission bill. Format: YYYY-MM.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Month of the commission bill. Format: YYYY-MM.
                     * @param _month Month of the commission bill. Format: YYYY-MM.
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
                     * 获取Bill file type. Valid value: CommissionDetail.
                     * @return FileType Bill file type. Valid value: CommissionDetail.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Bill file type. Valid value: CommissionDetail.
                     * @param _fileType Bill file type. Valid value: CommissionDetail.
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
                     * Month of the commission bill. Format: YYYY-MM.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Bill file type. Valid value: CommissionDetail.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEREBATEDOWNLOADURLREQUEST_H_
