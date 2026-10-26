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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVLPLANREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVLPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/CallbackURL.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * CreateVLPlan request structure.
                */
                class CreateVLPlanRequest : public AbstractModel
                {
                public:
                    CreateVLPlanRequest();
                    ~CreateVLPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Plan name. Supports Chinese, English, digits, _ and -. Up to 32 characters.</p>
                     * @return Name <p>Plan name. Supports Chinese, English, digits, _ and -. Up to 32 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Plan name. Supports Chinese, English, digits, _ and -. Up to 32 characters.</p>
                     * @param _name <p>Plan name. Supports Chinese, English, digits, _ and -. Up to 32 characters.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>ID of the associated visual understanding template</p>
                     * @return VLTemplateId <p>ID of the associated visual understanding template</p>
                     * 
                     */
                    std::string GetVLTemplateId() const;

                    /**
                     * 设置<p>ID of the associated visual understanding template</p>
                     * @param _vLTemplateId <p>ID of the associated visual understanding template</p>
                     * 
                     */
                    void SetVLTemplateId(const std::string& _vLTemplateId);

                    /**
                     * 判断参数 VLTemplateId 是否已赋值
                     * @return VLTemplateId 是否已赋值
                     * 
                     */
                    bool VLTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>Plan description. Up to 256 characters.</p>
                     * @return Describe <p>Plan description. Up to 256 characters.</p>
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置<p>Plan description. Up to 256 characters.</p>
                     * @param _describe <p>Plan description. Up to 256 characters.</p>
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取<p>Number of days to store screenshot files. Value range: [7, 1080]. Required in image mode. Do not pass this parameter in video mode.</p>
                     * @return FileExpires <p>Number of days to store screenshot files. Value range: [7, 1080]. Required in image mode. Do not pass this parameter in video mode.</p>
                     * 
                     */
                    int64_t GetFileExpires() const;

                    /**
                     * 设置<p>Number of days to store screenshot files. Value range: [7, 1080]. Required in image mode. Do not pass this parameter in video mode.</p>
                     * @param _fileExpires <p>Number of days to store screenshot files. Value range: [7, 1080]. Required in image mode. Do not pass this parameter in video mode.</p>
                     * 
                     */
                    void SetFileExpires(const int64_t& _fileExpires);

                    /**
                     * 判断参数 FileExpires 是否已赋值
                     * @return FileExpires 是否已赋值
                     * 
                     */
                    bool FileExpiresHasBeenSet() const;

                    /**
                     * 获取<p>Callback notification configuration</p>
                     * @return Callback <p>Callback notification configuration</p>
                     * 
                     */
                    CallbackURL GetCallback() const;

                    /**
                     * 设置<p>Callback notification configuration</p>
                     * @param _callback <p>Callback notification configuration</p>
                     * 
                     */
                    void SetCallback(const CallbackURL& _callback);

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     * 
                     */
                    bool CallbackHasBeenSet() const;

                private:

                    /**
                     * <p>Plan name. Supports Chinese, English, digits, _ and -. Up to 32 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>ID of the associated visual understanding template</p>
                     */
                    std::string m_vLTemplateId;
                    bool m_vLTemplateIdHasBeenSet;

                    /**
                     * <p>Plan description. Up to 256 characters.</p>
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * <p>Number of days to store screenshot files. Value range: [7, 1080]. Required in image mode. Do not pass this parameter in video mode.</p>
                     */
                    int64_t m_fileExpires;
                    bool m_fileExpiresHasBeenSet;

                    /**
                     * <p>Callback notification configuration</p>
                     */
                    CallbackURL m_callback;
                    bool m_callbackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVLPLANREQUEST_H_
