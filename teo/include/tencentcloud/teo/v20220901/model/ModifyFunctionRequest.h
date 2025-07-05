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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyFunction request structure.
                */
                class ModifyFunctionRequest : public AbstractModel
                {
                public:
                    ModifyFunctionRequest();
                    ~ModifyFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Function ID.
                     * @return FunctionId Function ID.
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置Function ID.
                     * @param _functionId Function ID.
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取Function description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.
                     * @return Remark Function description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Function description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.
                     * @param _remark Function description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Function content, which currently only supports JavaScript code. Its maximum size is 5 MB. If this parameter is not input, the original configuration is maintained.
                     * @return Content Function content, which currently only supports JavaScript code. Its maximum size is 5 MB. If this parameter is not input, the original configuration is maintained.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Function content, which currently only supports JavaScript code. Its maximum size is 5 MB. If this parameter is not input, the original configuration is maintained.
                     * @param _content Function content, which currently only supports JavaScript code. Its maximum size is 5 MB. If this parameter is not input, the original configuration is maintained.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Function ID.
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * Function description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Function content, which currently only supports JavaScript code. Its maximum size is 5 MB. If this parameter is not input, the original configuration is maintained.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONREQUEST_H_
