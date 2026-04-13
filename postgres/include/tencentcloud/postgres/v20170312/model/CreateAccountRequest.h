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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEACCOUNTREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateAccount request structure.
                */
                class CreateAccountRequest : public AbstractModel
                {
                public:
                    CreateAccountRequest();
                    ~CreateAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * @return DBInstanceId Instance ID. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * @param _dBInstanceId Instance ID. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取The name of the account created. Consists of letters (a-z, A-Z), numbers (0-9), underscores (_), starts with a letter or (_), up to 63 characters. Cannot use system reserved keywords, cannot be postgres, and cannot begin with pg_or tencentdb_
                     * @return UserName The name of the account created. Consists of letters (a-z, A-Z), numbers (0-9), underscores (_), starts with a letter or (_), up to 63 characters. Cannot use system reserved keywords, cannot be postgres, and cannot begin with pg_or tencentdb_
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置The name of the account created. Consists of letters (a-z, A-Z), numbers (0-9), underscores (_), starts with a letter or (_), up to 63 characters. Cannot use system reserved keywords, cannot be postgres, and cannot begin with pg_or tencentdb_
                     * @param _userName The name of the account created. Consists of letters (a-z, A-Z), numbers (0-9), underscores (_), starts with a letter or (_), up to 63 characters. Cannot use system reserved keywords, cannot be postgres, and cannot begin with pg_or tencentdb_
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Account type. currently supported: normal, tencentDBSuper. normal references a general user, tencentDBSuper is an account that possesses the pg_tencentdb_superuser role.
                     * @return Type Account type. currently supported: normal, tencentDBSuper. normal references a general user, tencentDBSuper is an account that possesses the pg_tencentdb_superuser role.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Account type. currently supported: normal, tencentDBSuper. normal references a general user, tencentDBSuper is an account that possesses the pg_tencentdb_superuser role.
                     * @param _type Account type. currently supported: normal, tencentDBSuper. normal references a general user, tencentDBSuper is an account that possesses the pg_tencentdb_superuser role.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Specifies the corresponding password for the account. the password rules are as follows:.
<Li>Specifies a length of 8 to 32 characters. a password of more than 12 characters is recommended.</li>.
<Li>Cannot start with "/".</li>.
<Li>Specifies the following four items must be included.</li>.

Valid values: a to z (lowercase letters).           
Uppercase letters: A - Z.
Valid values: 0 - 9.
Special symbols: ()`~!@#$%^&*-+=_|{}[]:<>,.?/.

                     * @return Password Specifies the corresponding password for the account. the password rules are as follows:.
<Li>Specifies a length of 8 to 32 characters. a password of more than 12 characters is recommended.</li>.
<Li>Cannot start with "/".</li>.
<Li>Specifies the following four items must be included.</li>.

Valid values: a to z (lowercase letters).           
Uppercase letters: A - Z.
Valid values: 0 - 9.
Special symbols: ()`~!@#$%^&*-+=_|{}[]:<>,.?/.

                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Specifies the corresponding password for the account. the password rules are as follows:.
<Li>Specifies a length of 8 to 32 characters. a password of more than 12 characters is recommended.</li>.
<Li>Cannot start with "/".</li>.
<Li>Specifies the following four items must be included.</li>.

Valid values: a to z (lowercase letters).           
Uppercase letters: A - Z.
Valid values: 0 - 9.
Special symbols: ()`~!@#$%^&*-+=_|{}[]:<>,.?/.

                     * @param _password Specifies the corresponding password for the account. the password rules are as follows:.
<Li>Specifies a length of 8 to 32 characters. a password of more than 12 characters is recommended.</li>.
<Li>Cannot start with "/".</li>.
<Li>Specifies the following four items must be included.</li>.

Valid values: a to z (lowercase letters).           
Uppercase letters: A - Z.
Valid values: 0 - 9.
Special symbols: ()`~!@#$%^&*-+=_|{}[]:<>,.?/.

                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Account remark. only allow english letters, digits, underscore, hyphen, and chinese characters, limited to 60 characters.
                     * @return Remark Account remark. only allow english letters, digits, underscore, hyphen, and chinese characters, limited to 60 characters.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Account remark. only allow english letters, digits, underscore, hyphen, and chinese characters, limited to 60 characters.
                     * @param _remark Account remark. only allow english letters, digits, underscore, hyphen, and chinese characters, limited to 60 characters.
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
                     * 获取Specifies whether CAM verification is enabled for the account.
                     * @return OpenCam Specifies whether CAM verification is enabled for the account.
                     * 
                     */
                    bool GetOpenCam() const;

                    /**
                     * 设置Specifies whether CAM verification is enabled for the account.
                     * @param _openCam Specifies whether CAM verification is enabled for the account.
                     * 
                     */
                    void SetOpenCam(const bool& _openCam);

                    /**
                     * 判断参数 OpenCam 是否已赋值
                     * @return OpenCam 是否已赋值
                     * 
                     */
                    bool OpenCamHasBeenSet() const;

                private:

                    /**
                     * Instance ID. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * The name of the account created. Consists of letters (a-z, A-Z), numbers (0-9), underscores (_), starts with a letter or (_), up to 63 characters. Cannot use system reserved keywords, cannot be postgres, and cannot begin with pg_or tencentdb_
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Account type. currently supported: normal, tencentDBSuper. normal references a general user, tencentDBSuper is an account that possesses the pg_tencentdb_superuser role.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Specifies the corresponding password for the account. the password rules are as follows:.
<Li>Specifies a length of 8 to 32 characters. a password of more than 12 characters is recommended.</li>.
<Li>Cannot start with "/".</li>.
<Li>Specifies the following four items must be included.</li>.

Valid values: a to z (lowercase letters).           
Uppercase letters: A - Z.
Valid values: 0 - 9.
Special symbols: ()`~!@#$%^&*-+=_|{}[]:<>,.?/.

                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Account remark. only allow english letters, digits, underscore, hyphen, and chinese characters, limited to 60 characters.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Specifies whether CAM verification is enabled for the account.
                     */
                    bool m_openCam;
                    bool m_openCamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEACCOUNTREQUEST_H_
