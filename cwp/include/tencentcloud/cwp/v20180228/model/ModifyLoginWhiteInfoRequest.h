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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGINWHITEINFOREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGINWHITEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/UpdateHostLoginWhiteObj.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyLoginWhiteInfo request structure.
                */
                class ModifyLoginWhiteInfoRequest : public AbstractModel
                {
                public:
                    ModifyLoginWhiteInfoRequest();
                    ~ModifyLoginWhiteInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Update the allowlist information entity
                     * @return HostLoginWhiteObj Update the allowlist information entity
                     * 
                     */
                    UpdateHostLoginWhiteObj GetHostLoginWhiteObj() const;

                    /**
                     * 设置Update the allowlist information entity
                     * @param _hostLoginWhiteObj Update the allowlist information entity
                     * 
                     */
                    void SetHostLoginWhiteObj(const UpdateHostLoginWhiteObj& _hostLoginWhiteObj);

                    /**
                     * 判断参数 HostLoginWhiteObj 是否已赋值
                     * @return HostLoginWhiteObj 是否已赋值
                     * 
                     */
                    bool HostLoginWhiteObjHasBeenSet() const;

                private:

                    /**
                     * Update the allowlist information entity
                     */
                    UpdateHostLoginWhiteObj m_hostLoginWhiteObj;
                    bool m_hostLoginWhiteObjHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGINWHITEINFOREQUEST_H_
