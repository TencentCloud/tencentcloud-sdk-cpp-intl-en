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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_MODIFYVLPLANREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_MODIFYVLPLANREQUEST_H_

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
                * ModifyVLPlan request structure.
                */
                class ModifyVLPlanRequest : public AbstractModel
                {
                public:
                    ModifyVLPlanRequest();
                    ~ModifyVLPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Plan ID</p>
                     * @return VLPlanId <p>Plan ID</p>
                     * 
                     */
                    std::string GetVLPlanId() const;

                    /**
                     * 设置<p>Plan ID</p>
                     * @param _vLPlanId <p>Plan ID</p>
                     * 
                     */
                    void SetVLPlanId(const std::string& _vLPlanId);

                    /**
                     * 判断参数 VLPlanId 是否已赋值
                     * @return VLPlanId 是否已赋值
                     * 
                     */
                    bool VLPlanIdHasBeenSet() const;

                    /**
                     * 获取<p>New plan name</p>
                     * @return Name <p>New plan name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>New plan name</p>
                     * @param _name <p>New plan name</p>
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
                     * 获取<p>New plan description.</p>
                     * @return Describe <p>New plan description.</p>
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置<p>New plan description.</p>
                     * @param _describe <p>New plan description.</p>
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
                     * 获取<p>ID of the newly associated visual understanding template</p>
                     * @return VLTemplateId <p>ID of the newly associated visual understanding template</p>
                     * 
                     */
                    std::string GetVLTemplateId() const;

                    /**
                     * 设置<p>ID of the newly associated visual understanding template</p>
                     * @param _vLTemplateId <p>ID of the newly associated visual understanding template</p>
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
                     * 获取<p>New storage days, range [7, 1080]. 0 means no modification</p>
                     * @return FileExpires <p>New storage days, range [7, 1080]. 0 means no modification</p>
                     * 
                     */
                    int64_t GetFileExpires() const;

                    /**
                     * 设置<p>New storage days, range [7, 1080]. 0 means no modification</p>
                     * @param _fileExpires <p>New storage days, range [7, 1080]. 0 means no modification</p>
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
                     * 获取<p>New callback configuration</p>
                     * @return Callback <p>New callback configuration</p>
                     * 
                     */
                    CallbackURL GetCallback() const;

                    /**
                     * 设置<p>New callback configuration</p>
                     * @param _callback <p>New callback configuration</p>
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
                     * <p>Plan ID</p>
                     */
                    std::string m_vLPlanId;
                    bool m_vLPlanIdHasBeenSet;

                    /**
                     * <p>New plan name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>New plan description.</p>
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * <p>ID of the newly associated visual understanding template</p>
                     */
                    std::string m_vLTemplateId;
                    bool m_vLTemplateIdHasBeenSet;

                    /**
                     * <p>New storage days, range [7, 1080]. 0 means no modification</p>
                     */
                    int64_t m_fileExpires;
                    bool m_fileExpiresHasBeenSet;

                    /**
                     * <p>New callback configuration</p>
                     */
                    CallbackURL m_callback;
                    bool m_callbackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_MODIFYVLPLANREQUEST_H_
