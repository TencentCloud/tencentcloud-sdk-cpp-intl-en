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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AUDITLOG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AUDITLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AccountInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Operation log
                */
                class AuditLog : public AbstractModel
                {
                public:
                    AuditLog();
                    ~AuditLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Employee information</p>
                     * @return AccountInfo <p>Employee information</p>
                     * 
                     */
                    AccountInfo GetAccountInfo() const;

                    /**
                     * 设置<p>Employee information</p>
                     * @param _accountInfo <p>Employee information</p>
                     * 
                     */
                    void SetAccountInfo(const AccountInfo& _accountInfo);

                    /**
                     * 判断参数 AccountInfo 是否已赋值
                     * @return AccountInfo 是否已赋值
                     * 
                     */
                    bool AccountInfoHasBeenSet() const;

                    /**
                     * 获取<p>Application business id</p>
                     * @return AppId <p>Application business id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Application business id</p>
                     * @param _appId <p>Application business id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Application name</p><p>Name when the operation log is triggered</p>
                     * @return AppName <p>Application name</p><p>Name when the operation log is triggered</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>Application name</p><p>Name when the operation log is triggered</p>
                     * @param _appName <p>Application name</p><p>Name when the operation log is triggered</p>
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取<p>Operation time</p><p>Parameter format: timestamp in seconds</p>
                     * @return OperateTime <p>Operation time</p><p>Parameter format: timestamp in seconds</p>
                     * 
                     */
                    std::string GetOperateTime() const;

                    /**
                     * 设置<p>Operation time</p><p>Parameter format: timestamp in seconds</p>
                     * @param _operateTime <p>Operation time</p><p>Parameter format: timestamp in seconds</p>
                     * 
                     */
                    void SetOperateTime(const std::string& _operateTime);

                    /**
                     * 判断参数 OperateTime 是否已赋值
                     * @return OperateTime 是否已赋值
                     * 
                     */
                    bool OperateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Operation type.</p>
                     * @return Action <p>Operation type.</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>Operation type.</p>
                     * @param _action <p>Operation type.</p>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>Operation object.</p>
                     * @return Biz <p>Operation object.</p>
                     * 
                     */
                    std::string GetBiz() const;

                    /**
                     * 设置<p>Operation object.</p>
                     * @param _biz <p>Operation object.</p>
                     * 
                     */
                    void SetBiz(const std::string& _biz);

                    /**
                     * 判断参数 Biz 是否已赋值
                     * @return Biz 是否已赋值
                     * 
                     */
                    bool BizHasBeenSet() const;

                    /**
                     * 获取<p>Operation content</p>
                     * @return Content <p>Operation content</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>Operation content</p>
                     * @param _content <p>Operation content</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>Unique ID for the operation.</p>
                     * @return UniqueId <p>Unique ID for the operation.</p>
                     * 
                     */
                    std::string GetUniqueId() const;

                    /**
                     * 设置<p>Unique ID for the operation.</p>
                     * @param _uniqueId <p>Unique ID for the operation.</p>
                     * 
                     */
                    void SetUniqueId(const std::string& _uniqueId);

                    /**
                     * 判断参数 UniqueId 是否已赋值
                     * @return UniqueId 是否已赋值
                     * 
                     */
                    bool UniqueIdHasBeenSet() const;

                private:

                    /**
                     * <p>Employee information</p>
                     */
                    AccountInfo m_accountInfo;
                    bool m_accountInfoHasBeenSet;

                    /**
                     * <p>Application business id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Application name</p><p>Name when the operation log is triggered</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>Operation time</p><p>Parameter format: timestamp in seconds</p>
                     */
                    std::string m_operateTime;
                    bool m_operateTimeHasBeenSet;

                    /**
                     * <p>Operation type.</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>Operation object.</p>
                     */
                    std::string m_biz;
                    bool m_bizHasBeenSet;

                    /**
                     * <p>Operation content</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>Unique ID for the operation.</p>
                     */
                    std::string m_uniqueId;
                    bool m_uniqueIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AUDITLOG_H_
