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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETEWEBCALLBACKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETEWEBCALLBACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteWebCallback request structure.
                */
                class DeleteWebCallbackRequest : public AbstractModel
                {
                public:
                    DeleteWebCallbackRequest();
                    ~DeleteWebCallbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the alarm channel callback configuration. Search the alarm channel callback configuration list (https://www.tencentcloud.com/document/api/614/115229?from_cn_redirect=1) to get the ID of the alarm channel callback configuration.
                     * @return WebCallbackId ID of the alarm channel callback configuration. Search the alarm channel callback configuration list (https://www.tencentcloud.com/document/api/614/115229?from_cn_redirect=1) to get the ID of the alarm channel callback configuration.
                     * 
                     */
                    std::string GetWebCallbackId() const;

                    /**
                     * 设置ID of the alarm channel callback configuration. Search the alarm channel callback configuration list (https://www.tencentcloud.com/document/api/614/115229?from_cn_redirect=1) to get the ID of the alarm channel callback configuration.
                     * @param _webCallbackId ID of the alarm channel callback configuration. Search the alarm channel callback configuration list (https://www.tencentcloud.com/document/api/614/115229?from_cn_redirect=1) to get the ID of the alarm channel callback configuration.
                     * 
                     */
                    void SetWebCallbackId(const std::string& _webCallbackId);

                    /**
                     * 判断参数 WebCallbackId 是否已赋值
                     * @return WebCallbackId 是否已赋值
                     * 
                     */
                    bool WebCallbackIdHasBeenSet() const;

                private:

                    /**
                     * ID of the alarm channel callback configuration. Search the alarm channel callback configuration list (https://www.tencentcloud.com/document/api/614/115229?from_cn_redirect=1) to get the ID of the alarm channel callback configuration.
                     */
                    std::string m_webCallbackId;
                    bool m_webCallbackIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETEWEBCALLBACKREQUEST_H_
