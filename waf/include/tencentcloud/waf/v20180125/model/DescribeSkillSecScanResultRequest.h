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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBESKILLSECSCANRESULTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBESKILLSECSCANRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeSkillSecScanResult request structure.
                */
                class DescribeSkillSecScanResultRequest : public AbstractModel
                {
                public:
                    DescribeSkillSecScanResultRequest();
                    ~DescribeSkillSecScanResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Service ID.</p>
                     * @return ServiceId <p>Service ID.</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>Service ID.</p>
                     * @param _serviceId <p>Service ID.</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>SHA256 hash of the ZIP file, in the format of sha256:hex_digest. Strictly follow the ZIP packaging specifications in the documentation</p>
                     * @return ContentHash <p>SHA256 hash of the ZIP file, in the format of sha256:hex_digest. Strictly follow the ZIP packaging specifications in the documentation</p>
                     * 
                     */
                    std::string GetContentHash() const;

                    /**
                     * 设置<p>SHA256 hash of the ZIP file, in the format of sha256:hex_digest. Strictly follow the ZIP packaging specifications in the documentation</p>
                     * @param _contentHash <p>SHA256 hash of the ZIP file, in the format of sha256:hex_digest. Strictly follow the ZIP packaging specifications in the documentation</p>
                     * 
                     */
                    void SetContentHash(const std::string& _contentHash);

                    /**
                     * 判断参数 ContentHash 是否已赋值
                     * @return ContentHash 是否已赋值
                     * 
                     */
                    bool ContentHashHasBeenSet() const;

                    /**
                     * 获取<p>Response language. Valid values: zh / en. Default value: zh</p>
                     * @return Lang <p>Response language. Valid values: zh / en. Default value: zh</p>
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置<p>Response language. Valid values: zh / en. Default value: zh</p>
                     * @param _lang <p>Response language. Valid values: zh / en. Default value: zh</p>
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                private:

                    /**
                     * <p>Service ID.</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>SHA256 hash of the ZIP file, in the format of sha256:hex_digest. Strictly follow the ZIP packaging specifications in the documentation</p>
                     */
                    std::string m_contentHash;
                    bool m_contentHashHasBeenSet;

                    /**
                     * <p>Response language. Valid values: zh / en. Default value: zh</p>
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBESKILLSECSCANRESULTREQUEST_H_
