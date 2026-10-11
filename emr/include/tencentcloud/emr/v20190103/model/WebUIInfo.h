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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_WEBUIINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_WEBUIINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * WebUI access information.
                */
                class WebUIInfo : public AbstractModel
                {
                public:
                    WebUIInfo();
                    ~WebUIInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Access address, which may be left empty.</p>
                     * @return Url <p>Access address, which may be left empty.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Access address, which may be left empty.</p>
                     * @param _url <p>Access address, which may be left empty.</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>WebUI status. Valid values:<br>-1: indicates that the current service does not have WebUI;<br>0: indicates that the current service has WebUI but does not have the KNOX service installed;<br>1: indicates that the current service has WebUI and has the KNOX service installed, but it does not have public network access enabled for the KNOX service;<br>2: indicates that the current service has WebUI, has the KNOX service installed, and has public network access enabled.</p>
                     * @return WebUIStatus <p>WebUI status. Valid values:<br>-1: indicates that the current service does not have WebUI;<br>0: indicates that the current service has WebUI but does not have the KNOX service installed;<br>1: indicates that the current service has WebUI and has the KNOX service installed, but it does not have public network access enabled for the KNOX service;<br>2: indicates that the current service has WebUI, has the KNOX service installed, and has public network access enabled.</p>
                     * 
                     */
                    int64_t GetWebUIStatus() const;

                    /**
                     * 设置<p>WebUI status. Valid values:<br>-1: indicates that the current service does not have WebUI;<br>0: indicates that the current service has WebUI but does not have the KNOX service installed;<br>1: indicates that the current service has WebUI and has the KNOX service installed, but it does not have public network access enabled for the KNOX service;<br>2: indicates that the current service has WebUI, has the KNOX service installed, and has public network access enabled.</p>
                     * @param _webUIStatus <p>WebUI status. Valid values:<br>-1: indicates that the current service does not have WebUI;<br>0: indicates that the current service has WebUI but does not have the KNOX service installed;<br>1: indicates that the current service has WebUI and has the KNOX service installed, but it does not have public network access enabled for the KNOX service;<br>2: indicates that the current service has WebUI, has the KNOX service installed, and has public network access enabled.</p>
                     * 
                     */
                    void SetWebUIStatus(const int64_t& _webUIStatus);

                    /**
                     * 判断参数 WebUIStatus 是否已赋值
                     * @return WebUIStatus 是否已赋值
                     * 
                     */
                    bool WebUIStatusHasBeenSet() const;

                    /**
                     * 获取<p>Service name.</p>
                     * @return ServiceName <p>Service name.</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>Service name.</p>
                     * @param _serviceName <p>Service name.</p>
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                private:

                    /**
                     * <p>Access address, which may be left empty.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>WebUI status. Valid values:<br>-1: indicates that the current service does not have WebUI;<br>0: indicates that the current service has WebUI but does not have the KNOX service installed;<br>1: indicates that the current service has WebUI and has the KNOX service installed, but it does not have public network access enabled for the KNOX service;<br>2: indicates that the current service has WebUI, has the KNOX service installed, and has public network access enabled.</p>
                     */
                    int64_t m_webUIStatus;
                    bool m_webUIStatusHasBeenSet;

                    /**
                     * <p>Service name.</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_WEBUIINFO_H_
