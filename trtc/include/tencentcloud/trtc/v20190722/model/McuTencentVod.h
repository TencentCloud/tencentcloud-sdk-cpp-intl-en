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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUTENCENTVOD_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUTENCENTVOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Mcu Relay Recording and Tencent VOD Parameters
                */
                class McuTencentVod : public AbstractModel
                {
                public:
                    McuTencentVod();
                    ~McuTencentVod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Post-Upload Task Processing
Automatically initiates task flows after media uploads complete. Value = Task flow template name.
VOD supports creating and naming task flow templates.
Example: template_name
                     * @return Procedure Post-Upload Task Processing
Automatically initiates task flows after media uploads complete. Value = Task flow template name.
VOD supports creating and naming task flow templates.
Example: template_name
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置Post-Upload Task Processing
Automatically initiates task flows after media uploads complete. Value = Task flow template name.
VOD supports creating and naming task flow templates.
Example: template_name
                     * @param _procedure Post-Upload Task Processing
Automatically initiates task flows after media uploads complete. Value = Task flow template name.
VOD supports creating and naming task flow templates.
Example: template_name
                     * 
                     */
                    void SetProcedure(const std::string& _procedure);

                    /**
                     * 判断参数 Procedure 是否已赋值
                     * @return Procedure 是否已赋值
                     * 
                     */
                    bool ProcedureHasBeenSet() const;

                    /**
                     * 获取Media File Expiration Time
Absolute expiration time from current timestamp.
86400 = 1 day retention
0 = permanent storage (default)
Example: 86400
                     * @return ExpireTime Media File Expiration Time
Absolute expiration time from current timestamp.
86400 = 1 day retention
0 = permanent storage (default)
Example: 86400
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Media File Expiration Time
Absolute expiration time from current timestamp.
86400 = 1 day retention
0 = permanent storage (default)
Example: 86400
                     * @param _expireTime Media File Expiration Time
Absolute expiration time from current timestamp.
86400 = 1 day retention
0 = permanent storage (default)
Example: 86400
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Upload Region Specification
For users requiring specific upload regions.
Example: ap-shanghai
                     * @return StorageRegion Upload Region Specification
For users requiring specific upload regions.
Example: ap-shanghai
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置Upload Region Specification
For users requiring specific upload regions.
Example: ap-shanghai
                     * @param _storageRegion Upload Region Specification
For users requiring specific upload regions.
Example: ap-shanghai
                     * 
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取Category ID
Manages media classification. Obtain via category creation API.
Default: 0 (Other category)
Example: 0
                     * @return ClassId Category ID
Manages media classification. Obtain via category creation API.
Default: 0 (Other category)
Example: 0
                     * 
                     */
                    uint64_t GetClassId() const;

                    /**
                     * 设置Category ID
Manages media classification. Obtain via category creation API.
Default: 0 (Other category)
Example: 0
                     * @param _classId Category ID
Manages media classification. Obtain via category creation API.
Default: 0 (Other category)
Example: 0
                     * 
                     */
                    void SetClassId(const uint64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取VOD SubAppId
Required when accessing sub-application resources. Leave empty otherwise.
Example: 0
                     * @return SubAppId VOD SubAppId
Required when accessing sub-application resources. Leave empty otherwise.
Example: 0
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置VOD SubAppId
Required when accessing sub-application resources. Leave empty otherwise.
Example: 0
                     * @param _subAppId VOD SubAppId
Required when accessing sub-application resources. Leave empty otherwise.
Example: 0
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Task Flow Context
Passed through in task completion callbacks.
Example: user_custom
                     * @return SessionContext Task Flow Context
Passed through in task completion callbacks.
Example: user_custom
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Task Flow Context
Passed through in task completion callbacks.
Example: user_custom
                     * @param _sessionContext Task Flow Context
Passed through in task completion callbacks.
Example: user_custom
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取Upload Context
Passed through in upload completion callbacks.
Example: user_custom
                     * @return SourceContext Upload Context
Passed through in upload completion callbacks.
Example: user_custom
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置Upload Context
Passed through in upload completion callbacks.
Example: user_custom
                     * @param _sourceContext Upload Context
Passed through in upload completion callbacks.
Example: user_custom
                     * 
                     */
                    void SetSourceContext(const std::string& _sourceContext);

                    /**
                     * 判断参数 SourceContext 是否已赋值
                     * @return SourceContext 是否已赋值
                     * 
                     */
                    bool SourceContextHasBeenSet() const;

                private:

                    /**
                     * Post-Upload Task Processing
Automatically initiates task flows after media uploads complete. Value = Task flow template name.
VOD supports creating and naming task flow templates.
Example: template_name
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * Media File Expiration Time
Absolute expiration time from current timestamp.
86400 = 1 day retention
0 = permanent storage (default)
Example: 86400
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Upload Region Specification
For users requiring specific upload regions.
Example: ap-shanghai
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * Category ID
Manages media classification. Obtain via category creation API.
Default: 0 (Other category)
Example: 0
                     */
                    uint64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * VOD SubAppId
Required when accessing sub-application resources. Leave empty otherwise.
Example: 0
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Task Flow Context
Passed through in task completion callbacks.
Example: user_custom
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * Upload Context
Passed through in upload completion callbacks.
Example: user_custom
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUTENCENTVOD_H_
