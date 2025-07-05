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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_MODIFYAPPSTATUSREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_MODIFYAPPSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * ModifyAppStatus request structure.
                */
                class ModifyAppStatusRequest : public AbstractModel
                {
                public:
                    ModifyAppStatusRequest();
                    ~ModifyAppStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID, which is generated and returned by the backend after the application creation.
                     * @return BizId Application ID, which is generated and returned by the backend after the application creation.
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置Application ID, which is generated and returned by the backend after the application creation.
                     * @param _bizId Application ID, which is generated and returned by the backend after the application creation.
                     * 
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取Application status. Valid values: `open`, `close`.
                     * @return Status Application status. Valid values: `open`, `close`.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Application status. Valid values: `open`, `close`.
                     * @param _status Application status. Valid values: `open`, `close`.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Application ID, which is generated and returned by the backend after the application creation.
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * Application status. Valid values: `open`, `close`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_MODIFYAPPSTATUSREQUEST_H_
